#include <iostream>
using namespace std;
// SOAL DASPRO UTS-B
// UTS smt 1 - no 2
int main()
{

    cout << "--------DAFTAR FILM--------\n";
    cout << "N/n = Nussa\n";
    cout << "S/s = Shang-Chi\n\n";

    cout << "--------DAFTAR BIOSKOP--------\n";
    cout << "1. Citra XXI\n";
    cout << "2. E Plaza\n";
    cout << "3. Cinemaxx\n\n";

    char film;
    int bioskop, tiket, uang, harganormal;
    float hargadiskon10, hargadiskon5;

    cout << "input judul film: ";
    cin >> film;
    switch (film)
    {
    case 'n':
        cout << "input biskop: ";
        cin >> bioskop;
        if (bioskop == 1)
        {
            cout << "harga = 40.000/tiket";
            cout << "\njumlah tiket = ";
            cin >> tiket;
            cout << "uang diterima = ";
            cin >> uang;
            harganormal = tiket * 40000;
            hargadiskon10 = harganormal * 0.90;
            hargadiskon5 = harganormal * 0.95;
            if (harganormal >= 200000)
            {
                cout << "harga yang harus dibayar = " << hargadiskon10;
                cout << "\nkembalian = " << uang - hargadiskon10;
            }
            else if (100000 <= harganormal && harganormal <= 199999)
            {
                cout << "harga yang harus dibayar = " << hargadiskon5;
                cout << "\nkembalian = " << uang - hargadiskon5;
            }
            else
            {
                cout << "harga yang harus dibayar = " << harganormal;
                cout << "\nkembalian = " << uang - harganormal;
            }
        }
        if (bioskop == 2)
        {
            cout << "harga = 25.000/tiket";
            cout << "\njumlah tiket = ";
            cin >> tiket;
            cout << "uang diterima = ";
            cin >> uang;
            harganormal = tiket * 25000;
            hargadiskon10 = harganormal * 0.90;
            hargadiskon5 = harganormal * 0.95;
            if (harganormal >= 200000)
            {
                cout << "harga yang harus dibayar = " << hargadiskon10;
                cout << "\nkembalian = " << uang - hargadiskon10;
            }
            else if (100000 <= harganormal && harganormal <= 199999)
            {
                cout << "harga yang harus dibayar = " << hargadiskon5;
                cout << "\nkembalian = " << uang - hargadiskon5;
            }
            else
            {
                cout << "harga yang harus dibayar = " << harganormal;
                cout << "\nkembalian = " << uang - harganormal;
            }
        }
        if (bioskop == 3)
        {
            cout << "harga = 35.000/tiket";
            cout << "\njumlah tiket = ";
            cin >> tiket;
            cout << "uang diterima = ";
            cin >> uang;
            harganormal = tiket * 35000;
            hargadiskon10 = harganormal * 0.90;
            hargadiskon5 = harganormal * 0.95;
            if (harganormal >= 200000)
            {
                cout << "harga yang harus dibayar = " << hargadiskon10;
                cout << "\nkembalian = " << uang - hargadiskon10;
            }
            else if (100000 <= harganormal && harganormal <= 199999)
            {
                cout << "harga yang harus dibayar = " << hargadiskon5;
                cout << "\nkembalian = " << uang - hargadiskon5;
            }
            else
            {
                cout << "harga yang harus dibayar = " << harganormal;
                cout << "\nkembalian = " << uang - harganormal;
            }
        }
        break;
    case 's':
        cout << "input biskop: ";
        cin >> bioskop;
        if (bioskop == 1)
        {
            cout << "harga = 50.000/tiket";
            cout << "\njumlah tiket = ";
            cin >> tiket;
            cout << "uang diterima = ";
            cin >> uang;
            harganormal = tiket * 50000;
            hargadiskon10 = harganormal * 0.90;
            hargadiskon5 = harganormal * 0.95;
            if (harganormal >= 200000)
            {
                cout << "harga yang harus dibayar = " << hargadiskon10;
                cout << "\nkembalian = " << uang - hargadiskon10;
            }
            else if (100000 <= harganormal && harganormal <= 199999)
            {
                cout << "harga yang harus dibayar = " << hargadiskon5;
                cout << "\nkembalian = " << uang - hargadiskon5;
            }
            else
            {
                cout << "harga yang harus dibayar = " << harganormal;
                cout << "\nkembalian = " << uang - harganormal;
            }
        }
        if (bioskop == 2)
        {
            cout << "harga = 35.000/tiket";
            cout << "\njumlah tiket = ";
            cin >> tiket;
            cout << "uang diterima = ";
            cin >> uang;
            harganormal = tiket * 35000;
            hargadiskon10 = harganormal * 0.90;
            hargadiskon5 = harganormal * 0.95;
            if (harganormal >= 200000)
            {
                cout << "harga yang harus dibayar = " << hargadiskon10;
                cout << "\nkembalian = " << uang - hargadiskon10;
            }
            else if (100000 <= harganormal && harganormal <= 199999)
            {
                cout << "harga yang harus dibayar = " << hargadiskon5;
                cout << "\nkembalian = " << uang - hargadiskon5;
            }
            else
            {
                cout << "harga yang harus dibayar = " << harganormal;
                cout << "\nkembalian = " << uang - harganormal;
            }
        }
        if (bioskop == 3)
        {
            cout << "harga = 45.000/tiket";
            cout << "\njumlah tiket = ";
            cin >> tiket;
            cout << "uang diterima = ";
            cin >> uang;
            harganormal = tiket * 45000;
            hargadiskon10 = harganormal * 0.90;
            hargadiskon5 = harganormal * 0.95;
            if (harganormal >= 200000)
            {
                cout << "harga yang harus dibayar = " << hargadiskon10;
                cout << "\nkembalian = " << uang - hargadiskon10;
            }
            else if (100000 <= harganormal && harganormal <= 199999)
            {
                cout << "harga yang harus dibayar = " << hargadiskon5;
                cout << "\nkembalian = " << uang - hargadiskon5;
            }
            else
            {
                cout << "harga yang harus dibayar = " << harganormal;
                cout << "\nkembalian = " << uang - harganormal;
            }
        }
        break;

    default:
        cout << "inputan anda salah";
        break;
    }

    return 0;
}