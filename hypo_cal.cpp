#include <iostream>
#include <cmath> // Required for sqrt function
using namespace std;

// Function to calculate the hypotenuse
double calculateHypotenuse(double base, double height) {
    return sqrt((base * base) + (height * height));
}

int main() {
    double base, height, hypotenuse;

    // Asking user for input
    cout << "Enter the base of the triangle: ";
    cin >> base;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Calling the function to calculate the hypotenuse
    hypotenuse = calculateHypotenuse(base, height);

    // Displaying the result
    cout << "The hypotenuse of the triangle is: " << hypotenuse << endl;

    return 0;
}
