#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rnum = 0;
    int guess;
    srand(time(0));
    rnum = rand() % 10 + 1;
    int chance = 3;
    cout << rnum<<endl;;
    while (chance != 0)
    {
        cout << "Enter a number to guess between (1 - 10)" << endl;
        cin >> guess;
        if (guess == rnum)
        {
            cout << "Hey you got this!!" << endl;
            break;
        }
        else
        {
            cout << "Try again !\n";
        }
        chance--;
    }
    if (chance == 0)
    {
        cout << "Bad luck try next time  it was :- " << rnum << endl;
    }
    return 0;
}