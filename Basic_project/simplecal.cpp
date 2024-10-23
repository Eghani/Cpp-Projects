// simple calculator (+,-,*,/,)

#include <iostream>
using namespace std;

int main()
{
    //  dec the data type of the variable
    double number1, number2;
    // dec the type of the opreation
    char op;

    // taking the input ofrom the user
    cout << "enter the number 1 " << endl;
    cin >> number1;

    cout << "enter the number 2 " << endl;
    cin >> number2;
    // taking the opreation from the user

    cout << "enter the opreation between these (+,-,*,/) " << endl;
    cin >> op;

    // we will use switch case statment to solve this you can also use if else if you want

    // we want to switch between op
    switch (op)
    {
    case '+':
        cout << number1 + number2 << endl;
        break;
    case '-':
        cout << number1 - number2 << endl;
        break;
    case '*':
        cout << number1 * number2 << endl;
        break;

        // noe for division there is a condition number 2 cannot be zero so we will use if else to check weather the no is zero or not

    case '/':
        if (number2 == 0)
        {
            cout << "number 2 cannot be zero try again" << endl;
        }
        else
        {
            cout << number1 / number2 << endl;
        }
        break;

    default:
        cout << "invalid opreation try again with valid opreation" << endl;

        break;
    }
    return 0;
}







/*
The provided code is a simple calculator program written in C++.
 It begins by including the necessary header file, <iostream>, 
 for input and output operations. In the main() function, two
  double variables (number1 and number2) and a char variable (op) 
  are declared to store the numbers and the operation, 
  respectively. The program then prompts the user to input two 
  numbers and an operation (either +, -, *, or /). 
  Using a switch statement, it performs the corresponding 
  arithmetic operation based on the user's input. 
  For addition, subtraction, and multiplication, 
  it directly computes and displays the result. For division, 
  it checks if the second number is zero to avoid division by zero; 
  if it is, it displays an error message. If an invalid operation is entered, 
  it displays an error message indicating an invalid operation. The program ends by returning 0.
*/

