#include <iostream>
using namespace std;

// Function to find the greatest number
int findGreatest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int num1, num2, num3, greatest;

    // Asking user for input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Calling the function to find the greatest number
    greatest = findGreatest(num1, num2, num3);

    // Displaying the result
    cout << "The greatest number is: " << greatest << endl;

    return 0;
}



/*

Function Declaration and Definition:

int findGreatest(int a, int b, int c); declares a function that takes three integer parameters and returns the greatest one.
The function compares the three numbers using conditional statements (if-else).
Main Function:

The program prompts the user to input three numbers.
It then calls the findGreatest function to determine which of the three numbers is the largest.
Finally, it outputs the greatest number.

*/