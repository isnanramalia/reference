#include <iostream>
using namespace std;
// SOAL DASPRO 7 - isna
// SIMULASI no 1
int main()
{
    int umur, pendapatan, tanggungan;
    char kerja, sekolah;

    cout << "masukan umur: ";
    cin >> umur;

    if (umur >= 18)
    {
        cout << "masukan statuss bekerja: ";
        cin >> kerja;
        if (kerja == 'y')
        {
            cout << "masukan pendapatan perbulan: ";
            cin >> pendapatan;
            cout << "masukan jumlah tanggungan: ";
            cin >> tanggungan;
            if (pendapatan / tanggungan <= 300000)
            {
                cout << "penduduk miskin";
            }
            else
            {
                cout << "bukan penduduk miskin";
            }
        }
        else
        {
            cout << "penduduk miskin";
        }
    }
    else
    {
        cout << "masukan status sekolah: ";
        cin >> sekolah;
        if (sekolah == 'y')
        {
            cout << "bukan penduduk miskin";
        }
        else
        {
            cout << "penduduk miskin";
        }
    }
}