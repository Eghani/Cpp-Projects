#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2;
    cout << "ENter the first number :- " << endl;
    cin >> n1;
    cout << "ENter the Second number :- " << endl;
    cin >> n2;
    int optr;
    cout << "Enter the operation you want to perform :- " << endl;
    cout << "1 :- Addition" << endl;
    cout << "2 :- Multiplication" << endl;
    cout << "3 :- Substraction" << endl;
    cout << "4 :- Division" << endl;
    cin >> optr;
    switch (optr)
    {
    case 1:
        cout << "Addition of " << n1 << " and " << n2 << " is :- " << n1 + n2 << endl;
        break;
    case 2:
        cout << "Multiplication of " << n1 << " and " << n2 << " is :- " << n1 * n2 << endl;
        break;
    case 3:
        cout << "Substraction of " << n1 << " and " << n2 << " is :- " << n1 - n2 << endl;
        break;
    case 4:
        cout << "Division of " << n1 << " and " << n2 << " is :- " << n1 + n2 << endl;
        break;

    default:
        cout << "Wallah habibi not working !" << endl;
        break;
    }
    return 0;
}