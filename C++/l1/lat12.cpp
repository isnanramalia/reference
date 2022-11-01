#include <iostream>
using namespace std;
// SOAL DASPRO UTS-B
// UTS smt 1 - no 1
int main()
{
    char kelamin;
    int level;

    cout << "input jenis kelamin [L/P]: ";
    cin >> kelamin;
    if (kelamin == 'L')
    {
        cout << "input level: ";
        cin >> level;
        if (level == 1)
        {
            cout << "minta maaf tsay";
        }
        else if (level == 2)
        {
            cout << "diemin aja dulu bang";
        }
        else if (level == 3)
        {
            cout << "ajak makan dong";
        }
        else if (level == 4)
        {
            cout << "ajak jalan-jalan lah";
        }
        else
        {
            cout << "inputan anda salah kak";
        }
    }
    else
    {
        cout << "input level: ";
        cin >> level;
        if (level == 1)
        {
            cout << "minta maaf tsay";
        }
        else if (level == 2)
        {
            cout << "diemin aja dulu mbak";
        }
        else if (level == 3)
        {
            cout << "beliin kado gass";
        }
        else if (level == 4)
        {
            cout << "selamatkan dirimu, red flag";
        }
        else
        {
            cout << "inputan anda salah kak";
        }
    }
    return 0;
}