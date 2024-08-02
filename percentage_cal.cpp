#include <iostream>
using namespace std;

// Function to calculate percentage
double calculatePercentage(double part, double total) {
    return (part / total) * 100;
}

// Function to calculate part from percentage
double calculatePart(double percentage, double total) {
    return (percentage / 100) * total;
}

int main() {
    int choice;
    double part, total, percentage, result;

    // Displaying menu to the user
    cout << "Percentage Calculator\n";
    cout << "1. Calculate percentage (given part and total)\n";
    cout << "2. Calculate part (given percentage and total)\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        // Option 1: Calculate percentage
        cout << "Enter the part value: ";
        cin >> part;
        cout << "Enter the total value: ";
        cin >> total;

        // Calling function to calculate percentage
        percentage = calculatePercentage(part, total);

        // Displaying the result
        cout << "The percentage is: " << percentage << "%" << endl;

    } else if (choice == 2) {
        // Option 2: Calculate part
        cout << "Enter the percentage: ";
        cin >> percentage;
        cout << "Enter the total value: ";
        cin >> total;

        // Calling function to calculate part
        part = calculatePart(percentage, total);

        // Displaying the result
        cout << "The part value is: " << part << endl;

    } else {
        // Invalid choice
        cout << "Invalid choice. Please run the program again and select 1 or 2." << endl;
    }

    return 0;
}
