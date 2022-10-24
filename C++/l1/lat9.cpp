#include <iostream>
using namespace std;
// SOAL DASPRO 9 - isna
// PDP_05 no 2
int main()
{
    int tahun, tambahan, tambahantotal;

    cout << "masukan tahun keluar motor: ";
    cin >> tahun;
    if (tahun >= 2020)
    {
        cout << "motor sudah tahun 2020";
    }
    else
    {
        tambahan = 2020 - tahun;
        tambahantotal = tambahan * 2000000;
        cout << tambahantotal;
    }

    return 0;
}