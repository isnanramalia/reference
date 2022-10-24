#include <iostream>
using namespace std;
// SOAL DASPRO 8 - isna
// PDP_05 no 1
int main()
{
    int nim;

    cout << "masukan NIM: ";
    cin >> nim;

    if (nim % 2 == 0)
    {
        cout << "tipe A";
    }
    else
    {
        cout << "tipe B";
    }
}