#include <iostream>
using namespace std;
// SOAL DASPRO 4 - halim
// latihan_dasar_daspro no 1
int main()
{
    char nama[20];
    char kelamin;
    string L, P;

    cout << "masukkan namamu: ";
    cin >> nama;
    cout << "aww" << nama << "badas bgt";
    L = "laki-laki";
    P = "perempuan";
    cout << "\njenis kelamin mu [L/P]: ";
    cin >> kelamin;

    if (kelamin == 'L')
    {
        cout << "ok jenis kelaminmu " << L << endl;
    }
    else
    {
        cout << "ok jenis kelaminmu " << P << endl;
    }
}