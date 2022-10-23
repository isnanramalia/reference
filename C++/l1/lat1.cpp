#include <iostream>
using namespace std;
// SOAL ITB 1 - juan
// Menentukan barang yang harus ditawarkan kepada pembeli (keuntungan paling banyak)
int main()
{
    int a, b, c, r, aa, bb, cc, ha, hb, hc;

    cout << "masukkan harga dasar barang A: ";
    cin >> a;
    cout << "\nmasukkan harga jual barang A: ";
    cin >> aa;
    cout << "\nmasukkan harga dasar barang B: ";
    cin >> b;
    cout << "\nmasukkan harga jual barang B: ";
    cin >> bb;
    cout << "\nmasukkan harga dasar barang C: ";
    cin >> c;
    cout << "\nmasukkan harga jual barang C: ";
    cin >> cc;

    ha = aa - a;
    hb = bb - b;
    hc = cc - c;
    if (ha > hb && ha > hc)
    {
        cout << "\nbarang yang harus ditawarkan adalah barang A";
    }
    else if (ha < hb && hb > hc)
    {
        cout << "\nbarang yang harus ditawarkan adalah barang B";
    }
    else if (ha < hc && hc > hb)
    {
        cout << "\nbarang yang harus ditawarkan adalah barang C";
    }

    return 0;
}
