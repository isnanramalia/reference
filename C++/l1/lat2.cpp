#include <iostream>
using namespace std;
// SOAL ITB 2 - juan
// Pengelompokan mahasiswa ke kelas-kelas sesuai urutan NIM berdasar ganjil genap
int main()
{
    int nim;

    cout << "masukkan akhiran NIM: ";
    cin >> nim;

    if (nim >= 1 && nim < 100)
    {
        if (nim % 2 == 1)
        {
            cout << "mahasiswa masuk ke kelas K1";
        }
        else if (nim % 2 == 0)
        {
            cout << "mahasiswa masuk ke kelas K2";
        }
    }
    else if (nim >= 101 && nim < 200)
    {
        if (nim % 2 == 0)
        {
            cout << "mahasiswa masuk ke kelas K4";
        }
        else
        {
            cout << "mahasiswa masuk ke kelas K3";
        }
    }
    else if (nim >= 201 && nim <= 300)
    {
        if (nim % 2 == 0)
        {
            cout << "mahasiswa masuk ke kelas K6";
        }
        else
        {
            cout << "mahasiswa masuk ke kelas K5";
        }
    }
    else if (nim > 300)
    {
        if (nim % 2 == 0)
        {
            cout << "mahasiswa masuk ke kelas K8";
        }
        else
        {
            cout << "mahasiswa masuk ke kelas K7";
        }
    }

    return 0;
}