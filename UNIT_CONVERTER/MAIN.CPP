#include <iostream>
using namespace std;

// Function to convert temperature
void convertTemperature() {
    double temp;
    int choice;
    cout << "Temperature Conversion Options:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the temperature: ";
    cin >> temp;

    if (choice == 1) {
        cout << "Temperature in Fahrenheit: " << (temp * 9 / 5) + 32 << " °F" << endl;
    } else if (choice == 2) {
        cout << "Temperature in Celsius: " << (temp - 32) * 5 / 9 << " °C" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }
}

// Function to convert length
void convertLength() {
    double length;
    int choice;
    cout << "Length Conversion Options:" << endl;
    cout << "1. Meters to Kilometers" << endl;
    cout << "2. Kilometers to Meters" << endl;
    cout << "3. Meters to Feet" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the length: ";
    cin >> length;

    if (choice == 1) {
        cout << "Length in Kilometers: " << length / 1000 << " km" << endl;
    } else if (choice == 2) {
        cout << "Length in Meters: " << length * 1000 << " m" << endl;
    } else if (choice == 3) {
        cout << "Length in Feet: " << length * 3.28084 << " ft" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }
}

// Function to convert weight
void convertWeight() {
    double weight;
    int choice;
    cout << "Weight Conversion Options:" << endl;
    cout << "1. Kilograms to Pounds" << endl;
    cout << "2. Pounds to Kilograms" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the weight: ";
    cin >> weight;

    if (choice == 1) {
        cout << "Weight in Pounds: " << weight * 2.20462 << " lbs" << endl;
    } else if (choice == 2) {
        cout << "Weight in Kilograms: " << weight / 2.20462 << " kg" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }
}

int main() {
    int category;

    cout << "Welcome to the Unit Converter!" << endl;
    cout << "Select a conversion category:" << endl;
    cout << "1. Temperature" << endl;
    cout << "2. Length" << endl;
    cout << "3. Weight" << endl;
    cout << "4. Exit" << endl;

    while (true) {
        cout << "\nEnter your choice: ";
        cin >> category;

        switch (category) {
            case 1:
                convertTemperature();
                break;
            case 2:
                convertLength();
                break;
            case 3:
                convertWeight();
                break;
            case 4:
                cout << "Exiting the Unit Converter. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
