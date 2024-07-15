
// bmi calculator

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double height;
    double weight;
    double htsq;
    double bmi;
    string unit;

    cout << "ENter your height " << endl;
    cin >> height;
    cout << "ENter the unit  " << endl;
    cin >> unit;

    if (unit == "cm")
    {
        height /= 100;
    }
    else if (unit == "ft")
    {
        height *= 0.3048;
    }
    else if (unit != "m")
    {
        cout << "invalid unit please enter the unit again";
    }

    cout << " enter your weight in kg " << endl;

    cin >> weight;
    cout << "ENter the unit  " << endl;
    cin >> unit;

    if (unit != "kg")
    {
        cout << "enter the unit in kg only " << endl;
    }

    htsq = pow(height, 2);

    bmi = weight / htsq;

    cout << "Your bmi is " << bmi << endl;

    return 0;
}







/*
Here's a summary:

1. **Include Header**:
   - `#include <bits/stdc++.h>`: Includes a standard library header that covers most common libraries.

2. **Main Function**:
   - `int main()`: Entry point of the program.

3. **Variable Declaration**:
   - `double height, weight, htsq, bmi`: Declare variables for height, weight, height squared, and BMI.
   - `string unit`: Declare a string variable to store the unit of height.

4. **User Input for Height**:
   - Prompts the user to enter their height and the unit (cm, ft, m).
   - Converts height to meters if the unit is centimeters or feet.

5. **User Input for Weight**:
   - Prompts the user to enter their weight in kilograms.
   - Checks if the weight unit is correctly entered as kilograms.

6. **BMI Calculation**:
   - Computes height squared (`htsq = pow(height, 2)`).
   - Calculates BMI using the formula `bmi = weight / htsq`.

7. **Output BMI**:
   - Displays the calculated BMI.

The program ensures that height is always converted to meters and validates that weight is entered in kilograms. It then calculates and displays the BMI.

*/