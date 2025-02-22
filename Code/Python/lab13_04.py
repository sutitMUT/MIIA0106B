import cv2
import numpy as np
import pytesseract
from paddleocr import PaddleOCR
import tkinter as tk
from tkinter import filedialog, messagebox
from PIL import Image, ImageTk

def preprocess_image(image_path):
    """
    โหลดภาพและแปลงเป็นขาวดำ พร้อม threshold
    """
    image = cv2.imread(image_path)
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    _, binary = cv2.threshold(gray, 150, 255, cv2.THRESH_BINARY_INV)
    return image, gray, binary

def segment_words(binary_image):
    """
    ค้นหาและแยกกลุ่มคำออกจากภาพ
    """
    contours, _ = cv2.findContours(binary_image, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    word_bounding_boxes = [cv2.boundingRect(cnt) for cnt in contours]
    return word_bounding_boxes

def extract_text(image, gray_image, word_boxes, lang='tha+eng'):
    """
    ตัดกลุ่มคำแต่ละกลุ่มแล้วใช้ OCR อ่านข้อความด้วย pytesseract
    """
    extracted_texts = []
    for (x, y, w, h) in word_boxes:
        word_roi = gray_image[y:y+h, x:x+w]
        text = pytesseract.image_to_string(word_roi, lang=lang).strip()
        if text:
            extracted_texts.append(text)
    return extracted_texts

def draw_word_boxes(image, word_boxes):
    """
    วาดกรอบรอบกลุ่มคำบนภาพ
    """
    for (x, y, w, h) in word_boxes:
        cv2.rectangle(image, (x, y), (x + w, y + h), (0, 255, 0), 2)
    return image

def save_text_to_file(text_list, output_file="output.txt"):
    """
    บันทึกผลลัพธ์ลงไฟล์
    """
    with open(output_file, "w", encoding="utf-8") as f:
        for text in text_list:
            f.write(text + "\n")
    print(f"ผลลัพธ์ถูกบันทึกลงไฟล์ {output_file}")

def process_paddleocr(image, lang='en'):
    """
    ใช้ PaddleOCR อ่านข้อความจากภาพ
    สามารถรับได้ทั้ง path ของไฟล์หรือข้อมูลของภาพ (numpy array)
    เราสามารถเลือกใช้ภาพที่ผ่านการ preprocess (เช่น gray หรือ binary)
    """
    ocr = PaddleOCR(lang=lang)
    results = ocr.ocr(image, cls=True)
    extracted_texts = [res[1][0] for res in results[0]]
    save_text_to_file(extracted_texts, "paddleocr_output.txt")
    return extracted_texts

def select_file():
    file_path = filedialog.askopenfilename(filetypes=[("Image Files", "*.png;*.jpg;*.jpeg;*.bmp")])
    if file_path:
        original, gray, binary = preprocess_image(file_path)
        word_boxes = segment_words(binary)
        processed_image = draw_word_boxes(original.copy(), word_boxes)
        display_process_images(original, gray, binary, processed_image)
        
        # ปรับตรงนี้เพื่อเลือกภาพที่ต้องการให้ PaddleOCR ใช้งาน
        # เช่น ใช้ gray image หรือ binary image แทนไฟล์ต้นฉบับ
        text_output = process_paddleocr(gray, lang='en')
        
        result_text.delete("1.0", tk.END)
        result_text.insert(tk.END, "\n".join(text_output))
        messagebox.showinfo("OCR Completed", "ผลลัพธ์ถูกบันทึกลงไฟล์ paddleocr_output.txt")
        display_image(file_path)

def display_image(image_path):
    """
    แสดงภาพที่เลือกใน GUI
    """
    img = Image.open(image_path)
    img = img.resize((250, 250))  # ปรับขนาดภาพ
    img = ImageTk.PhotoImage(img)
    img_label.config(image=img)
    img_label.image = img

def display_process_images(original, gray, binary, processed):
    """
    แสดงภาพในแต่ละขั้นตอนของการประมวลผล
    """
    cv2.imshow("Original Image", original)
    cv2.imshow("Grayscale Image", gray)
    cv2.imshow("Binary Image", binary)
    cv2.imshow("Processed Image with Word Boxes", processed)
    cv2.waitKey(0)
    cv2.destroyAllWindows()

# สร้าง UI ด้วย Tkinter
root = tk.Tk()
root.title("OCR Image Reader")
root.geometry("500x600")

title_label = tk.Label(root, text="เลือกไฟล์ภาพเพื่อแปลงเป็นข้อความ", font=("Arial", 12))
title_label.pack(pady=10)

select_button = tk.Button(root, text="เลือกไฟล์", command=select_file, font=("Arial", 10))
select_button.pack(pady=5)

img_label = tk.Label(root)  # Placeholder สำหรับแสดงภาพ
img_label.pack()

result_text = tk.Text(root, height=10, width=50, font=("Arial", 10))
result_text.pack(pady=10)

exit_button = tk.Button(root, text="ออก", command=root.quit, font=("Arial", 10))
exit_button.pack(pady=5)

root.mainloop()
