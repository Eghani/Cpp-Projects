#include <iostream>
using namespace std;

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;
    
    // Asking user for input
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    // Calling the function and storing the result in 'sum'
    sum = addNumbers(num1, num2);
    
    // Displaying the result
    cout << "The sum is: " << sum << endl;
    
    return 0;
}


// basic use of function in cpp