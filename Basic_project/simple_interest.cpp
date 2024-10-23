#include <iostream>
using namespace std;

// Function to calculate simple interest
double calculateSimpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100;
}

int main() {
    double principal, rate, time, interest;

    // Asking user for input
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate (in %): ";
    cin >> rate;

    cout << "Enter the time period (in years): ";
    cin >> time;

    // Calling the function to calculate simple interest
    interest = calculateSimpleInterest(principal, rate, time);

    // Displaying the result
    cout << "The simple interest is: " << interest << endl;

    return 0;
}
