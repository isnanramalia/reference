#include <iostream>
using namespace std;
// SOAL DASPRO 8 - isna
// SIMULASI no 2
int main()
{

    int umur, juara;
    int juara1a, juara2a, juara3a, juara1b, juara2b, juara3b, juara1c, juara2c, juara3c;
    juara2b, juara3c, juara1a = 5000000 * 0.95;
    juara2a, juara3b = 4000000 * 0.95;
    juara1b, juara2c = 6000000 * 0.95;
    juara1c = 7000000 * 0.95;
    juara3a = 3000000 * 0.95;

    cout << "masukan umur: ";
    cin >> umur;
    if (16 <= umur && umur <= 18)
    {
        cout << "masukan juara: ";
        cin >> juara;
        if (juara == 1)
        {
            cout << juara1a;
        }
        else if (juara == 2)
        {
            cout << juara2a;
        }
        else if (juara == 3)
        {
            cout << juara3a;
        }
    }
    else if (19 <= umur && umur <= 24)
    {
        cout << "masukan juara: ";
        cin >> juara;
        if (juara == 1)
        {
            cout << juara1b;
        }
        else if (juara == 2)
        {
            cout << juara2b;
        }
        else if (juara == 3)
        {
            cout << juara3b;
        }
    }
    else if (umur > 24)
    {
        cout << "masukan juara: ";
        cin >> juara;
        if (juara == 1)
        {
            cout << juara1c;
        }
        else if (juara == 2)
        {
            cout << juara2c;
        }
        else if (juara == 3)
        {
            cout << juara3c;
        }
    }
    else
    {
        cout << "inputan salah";
    }
}