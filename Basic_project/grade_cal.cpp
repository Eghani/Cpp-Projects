
// grade calculator

// average marks
// percentage
// total marks
// grade

#include <iostream>
using namespace std;
int main()
{
    double marks;
    double totalmarks = 0;
    double ave;
    double per;
    double nosub;

    while (true)
    {
        cout << "ENter the no of subjects (5 or 6)" << endl;
        cin >> nosub;

        if (nosub == 5)
        {

            int maxno = 500;
            for (int i = 1; i <= nosub; ++i)
            {
                cout << "ENter the marks of each subjects " << i << endl;
                cin >> marks;

                totalmarks += marks;

                ave = totalmarks / 5;

                per = (totalmarks * 100) / maxno;
            }
            break;
        }
        else if (nosub == 6)
        {
            int maxno = 600;
            for (int i = 1; i <= nosub; ++i)
            {
                cout << "ENter the marks of each subjects " << i << endl;
                cin >> marks;

                totalmarks += marks;

                ave = totalmarks / 5;

                per = (totalmarks * 100) / maxno;
            }
            break;
        }
        else
        {
            cout << " invalid " << endl;
        }
    }

    cout << "Your total marks is --- " << totalmarks << endl;
    cout << "based on your total marks your average marks is " << ave << endl;
    cout << "based on your marks you got  :-  " << per << "%" << endl;

    if (per >= 90)
    {
        cout << "Based on your percentage you have achieve 'A' grade congratulation" << endl;
    }
    else if (per > 80 && per < 90)
    {
        cout << "Based on your percentage you have achieve 'B' grade congratulation" << endl;
    }
    else if (per > 70 && per < 80)
    {
        cout << "Based on your percentage you have achieve 'C' grade congratulation" << endl;
    }
    else if (per > 60 && per < 70)
    {
        cout << "Based on your percentage you have achieve 'D' grade congratulation" << endl;
    }
    else if (per > 50 && per < 60)
    {
        cout << "Based on your percentage you have achieve 'E' grade congratulation" << endl;
    }
    else
    {
        cout << "focus on study get away form all the distractions  your grade is 'F' " << endl;
    }

    return 0;
}





/*

The provided code is a grade calculator in C++ that computes total marks, average marks, and percentage based on user input for either 5 or 6 subjects. 
It assigns a grade based on the calculated percentage. The program prompts the user to enter the number of subjects (either 5 or 6), 
then iterates through each subject to input marks, calculates total marks, average marks, and percentage, and finally displays these values 
along with the corresponding grade based on the percentage. If the number of subjects entered is invalid, the program prompts the user again. 
The grading scale ranges from 'A' for percentages 90% and above to 'F' for percentages below 50%.

*/