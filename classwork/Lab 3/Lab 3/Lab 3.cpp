// Lab 3: Falling Distance Calculator
// Coder: Elijah Santin
// Course: COSC 1436
// Semester: Fall 2024

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

// Constants
const double GRAVITY = 9.8; // gravity constant in m/s^2
const double METERS_TO_FEET = 3.28084; // conversion factor from meters to feet

// Function Prototypes
void displayProgramInfo();
int getFallingTime();
char getUnitChoice();
double calculateFallingDistance(int time);
double convertToFeet(double meters);
void displayFallingDistanceTable(int time, char unit);

int main() {
    // Display program information
    displayProgramInfo();

    // Get falling time from user
    int time = getFallingTime();

    // Get unit choice from user (meters or feet)
    char unit = getUnitChoice();

    // Display the table of falling distances
    displayFallingDistanceTable(time, unit);

    return 0;
}

// Function Definitions

// Display program information
void displayProgramInfo() {
    cout << "Falling Distance Calculator\n";
    cout << "Author: Your Name\n";
    cout << "Course: COSC 1436, Fall 2023\n\n";
}

// Get and validate the falling time from the user
int getFallingTime() {
    int time;
    do {
        cout << "Please enter the number of seconds (1-60): ";
        cin >> time;
        if (cin.fail() || time < 1 || time > 60) {
            cout << "Invalid input. Please enter a value between 1 and 60.\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    } while (time < 1 || time > 60);
    return time;
}

// Get and validate the unit choice from the user
char getUnitChoice() {
    char unit;
    do {
        cout << "Do you want the results in meters or feet? (m/f): ";
        cin >> unit;
        unit = tolower(unit);
        if (unit != 'm' && unit != 'f') {
            cout << "Invalid choice. Please enter 'm' for meters or 'f' for feet.\n";
        }
    } while (unit != 'm' && unit != 'f');
    return unit;
}

// Calculate the falling distance for a given time
double calculateFallingDistance(int time) {
    return 0.5 * GRAVITY * time * time;
}

// Convert distance from meters to feet
double convertToFeet(double meters) {
    return meters * METERS_TO_FEET;
}

// Display the table of falling distances
void displayFallingDistanceTable(int time, char unit) {
    cout << "\nSeconds      Distance\n";
    cout << "=====================\n";

    for (int t = 1; t <= time; ++t) {
        double distance = calculateFallingDistance(t);
        if (unit == 'f') {
            distance = convertToFeet(distance);
            cout << t << setw(15) << fixed << setprecision(2) << distance << " ft\n";
        } else {
            cout << t << setw(15) << fixed << setprecision(2) << distance << " m\n";
        }
    }
}


