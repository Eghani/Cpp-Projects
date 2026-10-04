#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int otp = 0;
    srand(time(0));
    otp = rand() % 3000 + 1000;
    cout<<"your one time password is :- "<<otp<<endl;
    return 0;
}