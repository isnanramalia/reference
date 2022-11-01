#include <iostream>
using namespace std;
// SOAL DASPRO UTS-A
// UTS smt 1 - no 1
int main()
{
    int year;
    float score;

    cout << "input year: ";
    cin >> year;

    if (year >= 2018)
    {
        cout << "input score: ";
        cin >> score;
        if (85 <= score && score <= 100)
        {
            cout << "A";
        }
        else if (80 <= score && score <= 84.9)
        {
            cout << "AB";
        }
        else if (70 <= score && score <= 79.9)
        {
            cout << "B";
        }
        else if (65 <= score && score <= 69.9)
        {
            cout << "BC";
        }
        else if (60 <= score && score <= 64.9)
        {
            cout << "C";
        }
        else if (50 <= score && score <= 59.9)
        {
            cout << "D";
        }
        else if (0 <= score && score <= 49.9)
        {
            cout << "E";
        }
        else
        {
            cout << "inputan salah";
        }
    }
    else
    {
        cout << "input score: ";
        cin >> score;
        if (85 <= score && score <= 100)
        {
            cout << "A";
        }
        else if (70 <= score && score <= 84.5)
        {
            cout << "B";
        }
        else if (60 <= score && score <= 69.9)
        {
            cout << "C";
        }
        else if (50 <= score && score <= 59.9)
        {
            cout << "D";
        }
        else if (0 <= score && score <= 49.9)
        {
            cout << "E";
        }
        else
        {
            cout << "inputan salah";
        }
    }
    return 0;
}