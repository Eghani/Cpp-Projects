#include <iostream>
using namespace std;
int main()
{
    char choice;
    double  c, f;

    while (true)
    {
        cout << "if you want ot convert celsius into ferhite then enter 'c' " << endl;
        cout << "if you want ot convert ferhite  into celsius then enter 'f' " << endl;
        cin >> choice;

        if (choice == 'c')
        {
            cout << "enter the temprature in celsius " << endl;
            cin >> c;

            f = (c * 9 / 5) + 32;
            cout << "the converted temperature in ferhite is  " << " :-    " << f << endl;
            break;
        }
        else if (choice == 'f')
        {
            cout << "enter the temprature in ferhite " << endl;
            cin >> f;
            c = (f-32) * 5/9;
            cout << "the converted temperature in celsius is   " << ":-     " << c << endl;
            break;
        }
        else
        {
            cout << "enter only 'c' and 'f' other charactor will be invalid " << endl;
        }
    }

    return 0;
}





/*

The provided code is a temperature conversion program written in C++. It includes the `<iostream>` header file for input and output operations. 
In the `main()` function, a char variable `choice` and two double variables `c` and `f` are declared to store the user's 
choice and the temperature values, respectively. The program runs in an infinite loop using `while (true)`, prompting the user to choose 
between converting Celsius to Fahrenheit (enter 'c') or Fahrenheit to Celsius (enter 'f'). Depending on the user's input, the program performs 
the appropriate conversion: 

- If the user enters 'c', the program asks for the temperature in Celsius, converts it to Fahrenheit using the formula `f = (c * 9 / 5) + 32`, and displays the result.
- If the user enters 'f', the program asks for the temperature in Fahrenheit, converts it to Celsius using the formula `c = (f - 32) * 5 / 9`, and displays the result.

If the user enters any other character, the program displays an error message prompting the user to enter only 'c' or 'f'. 
The loop continues until a valid choice is made and the conversion is performed, after which the program breaks out of the loop and ends by returning 0.

*/