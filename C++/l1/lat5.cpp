#include <iostream>
using namespace std;
// SOAL DASPRO 5 - halim
// latihan_dasar_daspro no 2
int main()
{
    string teman, alamat, no, email;

    cout << "Masukkan nama teman anda: ";
    cin >> teman;
    cout << "Masukkan alamatnya: ";
    cin >> alamat;
    cout << "Masukkan no hp: ";
    cin >> no;
    cout << "Masukkan nama email: ";
    cin >> email;

    cout << "\n\now ternyata beliau itu " << teman << " yang alamatnya " << alamat << " \nBeneran?"
         << "\nYang nomor HP nya " << no << "\nAku sering diberi berita keren lewat email " << email;
}