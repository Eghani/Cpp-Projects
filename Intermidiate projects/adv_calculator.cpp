#include <iostream>
#include <cmath>
using namespace std;

void showMenu()
{
    cout << endl;
    cout << "===== Calculator Menu =====" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exponentiation (x^y)" << endl;
    cout << "6. Modulo (%)" << endl;
    cout << "7. Square Root (root)" << endl;
    cout << "8. Factorial (n!)" << endl;
    cout << "9. Exit" << endl;
    cout << "Enter your choice: ";
}

int main()
{
    int choice;
    float add, substract, n1, n2, Multi;
    float div, result;
    int x,y,modulo;
    int factorial;
    float srt;

    do
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nYou chose Addition.\n";
            cout << "\nFOR THIS VERSION, YOU CAN ONLY DO OPERATIONS BETWEEN TWO NUMBERS.\n";
            cout << "\nEnter the First Number: ";
            cin >> n1;
            cout << "Enter the Second  Number: ";
            cin >> n2;
            add = n1 + n2;
            cout << "\nThe Addition of " << n1 << " + " << n2 << " = " << add << ". \n"
                 << endl;
            break;
        case 2:
            cout << "\nYou chose Subtraction.\n";
            cout << "\nFOR THIS VERSION, YOU CAN ONLY DO OPERATIONS BETWEEN TWO NUMBERS.\n";
            cout << "\nEnter the First Number: ";
            cin >> n1;
            cout << "Enter the Second  Number: ";
            cin >> n2;
            substract = n1 - n2;
            cout << "\nThe Substraction of " << n1 << " - " << n2 << " = " << substract << ". \n"
                 << endl;
            break;
        case 3:
            cout << "\nYou chose Multiplication.\n";
            cout << "\nFOR THIS VERSION, YOU CAN ONLY DO OPERATIONS BETWEEN TWO NUMBERS.\n";
            cout << "\nEnter the First Number: ";
            cin >> n1;
            cout << "Enter the Second  Number: ";
            cin >> n2;
            Multi = n1 * n2;
            cout << "\nThe Multiplication of " << n1 << " * " << n2 << " = " << Multi << ". \n"
                 << endl;
            break;
        case 4:
            cout << "\nYou chose Division.\n";
            cout << "\nFOR THIS VERSION, YOU CAN ONLY DO OPERATIONS BETWEEN TWO NUMBERS.\n";
            cout << "\nEnter the First Number: ";
            cin >> n1;
            cout << "Enter the Second Number: ";
            cin >> n2;
            while (n2 == 0)
            {
                cout << "Division by zero is not possible! Please Enter a non-zero number: ";
                cin >> n2;
            }

            div = n1 / n2;

            cout << "\nThe Division of " << n1 << " / " << n2 << " = " << div << ". \n"
                 << endl;
            break;
        case 5:
            cout << "\nYou chose Exponentiation.\n";
            cout << "\nFOR THIS VERSION, YOU CAN ONLY DO OPERATIONS BETWEEN TWO NUMBERS.\n";

            cout << "Enter base (x): ";
            cin >> n1;
            cout << "Enter exponent (y): ";
            cin >> n2;

            result = pow(n1, n2);

            cout << n1 << " raised to the power " << n2 << " is = " << result << endl;
            break;
        case 6:
            cout << "\nYou chose Modulo Operation.\n";
            cout << "\nFOR THIS VERSION, YOU CAN ONLY DO OPERATIONS BETWEEN TWO NUMBERS.\n";

            cout << "Enter first number : ";
            cin >> x;
            cout << "Enter second number : ";
            cin >> y;

            modulo = x % y;

            cout << "The remainder when " << x << " is divided by " << y << " is = " << modulo << endl;

            break;
        case 7:
            cout << "\nYou chose Square Root Calculation.\n";
            cout << "\nFOR THIS VERSION, YOU CAN ONLY FIND THE SQUARE ROOT OF ONE NUMBER.\n";

            cout << "Enter a number (x): ";
            cin >> n1;

            srt = sqrt(n1);

            cout << "The square root of " << n1 << " is = " << srt << endl;

            break;
        case 8:
            cout << "\nYou chose Factorial Calculation.\n";
            cout << "\nFOR THIS VERSION, YOU CAN ONLY FIND THE FACTORIAL OF ONE NUMBER.\n";

            cout << "Enter a number (x): ";
            cin >> n1;

            factorial = 1;
            for (int i = 1; i <= n1; i++)
            {
                factorial *= i;
            }

            cout << "The factorial of " << n1 << " is = " << factorial << endl;

            break;
        case 9:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 9);

    return 0;
}
