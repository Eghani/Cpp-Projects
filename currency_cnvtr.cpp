// indian currency converter
// You can convert indian currency into 9 different country currency top 10 gdp wise


#include <bits/stdc++.h>
using namespace std;
int main()
{
    double ind;

    string country;

    double usa = 83.360280;
    double canada = 61.134422;
    double japan = 0.534876;
    double china = 11.534745;
    double uk = 105.500250;
    double germany = 90.406922;
    double italy = 90.406922;
    double france = 90.406922;
    double brazil = 16.249102;

    // code for country (usa canada japan china uk germany italy france brazil)

    cout << "enter the amount in indian rupee " << endl;
    cin >> ind;
    cout << "enter the country (ind) " << endl;
    cin >> country;

    if (country != "ind")
    {
        cout << "invalid country please enter only ind " << endl;
    }
    else
    {
        cout << "enter the country code to exchange the rate in that country from these code " << endl;
        cout << "(usa canada japan china uk germany italy france brazil) " << endl;
        cin >> country;

        if (country == "usa")
        {
            cout << ind / usa << endl;
        }
        else if (country == "japan")
        {
            cout << ind / japan << endl;
        }
        else if (country == "italy")
        {
            cout << ind / italy << endl;
        }
        else if (country == "germany")
        {
            cout << ind / germany << endl;
        }
        else if (country == "uk")
        {
            cout << ind / uk << endl;
        }
        else if (country == "china")
        {
            cout << ind / china << endl;
        }
        else if (country == "brazil")
        {
            cout << ind / brazil << endl;
        }
        else if (country == "france")
        {
            cout << ind / france << endl;
        }
        else if (country == "canada")
        {
            cout << ind / canada << endl;
        }
        else{
            cout<<"invalid code"<<endl;
        }
    }

    return 0;
}





/*

Here's a summary:

1. **Include Header**:
   - `#include <bits/stdc++.h>`: Includes a standard library header that covers most common libraries.

2. **Main Function**:
   - `int main()`: Entry point of the program.

3. **Variable Declaration**:
   - `double ind`: Variable to store the amount in Indian Rupees.
   - `string country`: Variable to store the country code.
   - Conversion rates for different countries:
     - `double usa = 83.360280;`
     - `double canada = 61.134422;`
     - `double japan = 0.534876;`
     - `double china = 11.534745;`
     - `double uk = 105.500250;`
     - `double germany = 90.406922;`
     - `double italy = 90.406922;`
     - `double france = 90.406922;`
     - `double brazil = 16.249102;`

4. **User Input for Indian Rupees**:
   - Prompts the user to enter the amount in Indian Rupees.

5. **User Input for Country Code**:
   - Prompts the user to enter the country code 'ind'.
   - If the country code is not 'ind', it shows an error message and prompts to enter the correct code.

6. **User Input for Conversion Country**:
   - Prompts the user to enter the target country code for currency conversion.

7. **Currency Conversion**:
   - Uses `if-else` statements to convert the amount in Indian Rupees to the selected country's currency based on the conversion rates provided.
   - Outputs the converted amount.

8. **Error Handling**:
   - If an invalid country code is entered, it displays an error message.

The program converts Indian Rupees to the currency of nine different countries (USA, Canada, Japan, China, UK, Germany, Italy, France, Brazil) using predefined conversion rates and outputs the result.

*/