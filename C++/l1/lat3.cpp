#include <iostream>
using namespace std;
// SOAL DASPRO 3 - juan
// Leo ribet, banyak maunya --> minta ukuran baju sesuai atau lebih besar dikit
int main()
{
    int l, p, li;

    cout << "Masukkan ukuran lebar bahu: ";
    cin >> l;
    cout << "Masukkan ukuran panjang baju: ";
    cin >> p;
    cout << "Masukkan ukuran lingkar baju: ";
    cin >> li;

    if (l <= 10 && (p <= 40) && (li <= 90))
    {
        cout << "ukuran baju yang tepat adalah S";
    }
    else if ((l <= 14) && (p <= 60) && (li <= 120))
    {
        cout << "ukuran baju yang tepat adalah M";
    }
    else if ((l <= 18) && (p <= 80) && (li <= 180))
    {
        cout << "ukuran baju yang tepat adalah L";
    }
    else
    {
        cout << "ukuran baju yang tepat adalah XL";
    }

    return 0;
}