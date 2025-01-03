def control_car(sensor_input):
    if sensor_input == "left":
        print("Turning left...")
    elif sensor_input == "right":
        print("Turning right...")
    elif sensor_input == "center":
        print("Moving straight...")
    else:
        print("Invalid sensor input!")

def main():
    while True:
        sensor_input = input("Enter sensor input (left, right, center): ").strip().lower()
        
        # Control the car based on sensor input
        control_car(sensor_input)
        
        # Exit simulation
        if sensor_input == "exit":
            print("Exiting simulation...")
            break

if __name__ == "__main__":
    main()
