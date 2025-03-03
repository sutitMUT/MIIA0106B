import urllib.request
import gzip
import shutil

def download_and_extract(url, filename):
    print(f"Downloading {url}...")
    urllib.request.urlretrieve(url, filename + ".gz")

    print(f"Extracting {filename}.gz...")
    with gzip.open(filename + ".gz", 'rb') as f_in:
        with open(filename, 'wb') as f_out:
            shutil.copyfileobj(f_in, f_out)

    print(f"File saved: {filename}")

# ลองใช้ลิงก์สำรองแทน
alternative_urls = {
    "train-images": "https://storage.googleapis.com/cvdf-datasets/mnist/train-images-idx3-ubyte.gz",
    "train-labels": "https://storage.googleapis.com/cvdf-datasets/mnist/train-labels-idx1-ubyte.gz",
    "test-images": "https://storage.googleapis.com/cvdf-datasets/mnist/t10k-images-idx3-ubyte.gz",
    "test-labels": "https://storage.googleapis.com/cvdf-datasets/mnist/t10k-labels-idx1-ubyte.gz"
}

for key, url in alternative_urls.items():
    download_and_extract(url, f"{key}.idx3-ubyte" if "images" in key else f"{key}.idx1-ubyte")
