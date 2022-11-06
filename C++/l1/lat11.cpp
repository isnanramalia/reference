#include <iostream>
using namespace std;
// SOAL DASPRO UTS - A
// UTS smt 1 - no 2
int main()
{
    int hari, uang, harganormal, hargadiskon10, hargadiskon5;
    char jenishotel;

    cout << "---JENIS HOTEL---";
    cout << "\nP/p = premium";
    cout << "\nE/e = eksklusif\n";
    cout << "\ninput jenis hotel: ";
    cin >> jenishotel;

    if (jenishotel == 'p' || jenishotel == 'P')
    {
        cout << "input berapa hari: ";
        cin >> hari;
        if (1 <= hari && hari <= 3)
        {
            cout << "input uang yang dibayarkan: ";
            cin >> uang;
            harganormal = hari * 150000;
            hargadiskon10 = harganormal * 0.90;
            hargadiskon5 = harganormal * 0.95;
            if (harganormal >= 1000000)
            {
                cout << "yang harus kamu bayar: " << hargadiskon10;
                cout << "\nkembalian kamu " << uang - hargadiskon10;
            }
            else if (500000 <= harganormal && harganormal <= 999999)
            {
                cout << "yang harus kamu bayar: " << hargadiskon5;
                cout << "\nkembalian kamu " << uang - hargadiskon5;
            }
            else if (harganormal < 500000)
            {
                cout << "yang harus kamu bayar: " << harganormal;
                cout << "\nkembalian kamu " << uang - harganormal;
            }
            else
            {
                cout << "yang harus kamu bayar: " << harganormal;
                cout << "\nkembalian kamu " << uang - harganormal;
            }
        }
        else if (4 <= hari && hari <= 6)
        {
            cout << "input uang yang dibayarkan: ";
            cin >> uang;
            harganormal = hari * 300000;
            hargadiskon10 = harganormal * 0.90;
            hargadiskon5 = harganormal * 0.95;
            if (harganormal >= 1000000)
            {
                cout << "yang harus kamu bayar: " << hargadiskon10;
                cout << "\nkembalian kamu " << uang - hargadiskon10;
            }
            else if (500000 <= harganormal && harganormal <= 999999)
            {
                cout << "yang harus kamu bayar: " << hargadiskon5;
                cout << "\nkembalian kamu " << uang - hargadiskon5;
            }
            else if (harganormal < 500000)
            {
                cout << "yang harus kamu bayar: " << harganormal;
                cout << "\nkembalian kamu " << uang - harganormal;
            }
            else
            {
                cout << "yang harus kamu bayar: " << harganormal;
                cout << "\nkembalian kamu " << uang - harganormal;
            }
        }
        else if (hari > 6)
        {
            cout << "input uang yang dibayarkan: ";
            cin >> uang;
            harganormal = hari * 500000;
            hargadiskon10 = harganormal * 0.90;
            hargadiskon5 = harganormal * 0.95;
            if (harganormal >= 1000000)
            {
                cout << "yang harus kamu bayar: " << hargadiskon10;
                cout << "\nkembalian kamu " << uang - hargadiskon10;
            }
            else if (500000 <= harganormal && harganormal <= 999999)
            {
                cout << "yang harus kamu bayar: " << hargadiskon5;
                cout << "\nkembalian kamu " << uang - hargadiskon5;
            }
            else if (harganormal < 500000)
            {
                cout << "yang harus kamu bayar: " << harganormal;
                cout << "\nkembalian kamu " << uang - harganormal;
            }
            else
            {
                cout << "yang harus kamu bayar: " << harganormal;
                cout << "\nkembalian kamu " << uang - harganormal;
            }
        }
        else
        {
            cout << "inputan salah";
        }
    }

    else if (jenishotel == 'e' || jenishotel == 'E')
    {
        cout << "input berapa hari: ";
        cin >> hari;
        if (1 <= hari && hari <= 3)
        {
            cout << "input uang yang dibayarkan: ";
            cin >> uang;
            harganormal = hari * 200000;
            hargadiskon10 = harganormal * 0.90;
            hargadiskon5 = harganormal * 0.95;
            if (harganormal >= 1000000)
            {
                cout << "yang harus kamu bayar: " << hargadiskon10;
                cout << "\nkembalian kamu " << uang - hargadiskon10;
            }
            else if (500000 <= harganormal && harganormal <= 999999)
            {
                cout << "yang harus kamu bayar: " << hargadiskon5 + 1; // ini gatau tapi dia bug, hasilnya ada -1, aneh banget. jdinya aku tambahin +1 disitu wkekek
                cout << "\nkembalian kamu " << uang - hargadiskon5 - 1;
            }
            else if (harganormal < 500000)
            {
                cout << "yang harus kamu bayar: " << harganormal;
                cout << "\nkembalian kamu " << uang - harganormal;
            }
            else
            {
                cout << "yang harus kamu bayar: " << harganormal;
                cout << "\nkembalian kamu " << uang - harganormal;
            }
        }
        else if (4 <= hari && hari <= 6)
        {
            cout << "input uang yang dibayarkan: ";
            cin >> uang;
            harganormal = hari * 400000;
            hargadiskon10 = harganormal * 0.90;
            hargadiskon5 = harganormal * 0.95;
            if (harganormal >= 1000000)
            {
                cout << "yang harus kamu bayar: " << hargadiskon10;
                cout << "\nkembalian kamu " << uang - hargadiskon10;
            }
            else if (500000 <= harganormal && harganormal <= 999999)
            {
                cout << "yang harus kamu bayar: " << hargadiskon5;
                cout << "\nkembalian kamu " << uang - hargadiskon5;
            }
            else if (harganormal < 500000)
            {
                cout << "yang harus kamu bayar: " << harganormal;
                cout << "\nkembalian kamu " << uang - harganormal;
            }
            else
            {
                cout << "yang harus kamu bayar: " << harganormal;
                cout << "\nkembalian kamu " << uang - harganormal;
            }
        }
        else if (hari > 6)
        {
            cout << "input uang yang dibayarkan: ";
            cin >> uang;
            harganormal = hari * 700000;
            hargadiskon10 = harganormal * 0.90;
            hargadiskon5 = harganormal * 0.95;
            if (harganormal >= 1000000)
            {
                cout << "yang harus kamu bayar: " << hargadiskon10;
                cout << "\nkembalian kamu " << uang - hargadiskon10;
            }
            else if (500000 <= harganormal && harganormal <= 999999)
            {
                cout << "yang harus kamu bayar: " << hargadiskon5;
                cout << "\nkembalian kamu " << uang - hargadiskon5;
            }
            else if (harganormal < 500000)
            {
                cout << "yang harus kamu bayar: " << harganormal;
                cout << "\nkembalian kamu " << uang - harganormal;
            }
            {
                cout << "yang harus kamu bayar: " << harganormal;
                cout << "\nkembalian kamu " << uang - harganormal;
            }
        }
        else
        {
            cout << "inputan salah";
        }
    }
    else
        cout << "inputan salah";

    return 0;
}