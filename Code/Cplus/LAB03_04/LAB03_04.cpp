#include <iostream>
#include <string>
using namespace std;

// Function to simulate the movement of the car based on sensor input
void controlCar(const string& sensorInput) {
    if (sensorInput == "left") {
        cout << "Turning left..." << endl;
    }
    else if (sensorInput == "right") {
        cout << "Turning right..." << endl;
    }
    else if (sensorInput == "center") {
        cout << "Moving straight..." << endl;
    }
    else {
        cout << "Invalid sensor input!" << endl;
    }
}

int main() {
    string sensorInput;

    // Example simulation
    while (true) {
        cout << "Enter sensor input (left, right, center): ";
        cin >> sensorInput;

        // Control the car based on sensor input
        controlCar(sensorInput);

        // Exit simulation
        if (sensorInput == "exit") {
            break;
        }
    }

    return 0;
}
