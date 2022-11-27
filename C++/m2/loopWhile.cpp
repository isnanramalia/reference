#include <iostream>
using namespace std;

int main(){
    //looping while - kelas terbuka

    int a = 5;

    //bakal infinity karena tidak ada break
    // while(a<=10){
    //     cout << "hore ";
    // }

    //bakal break di 10 krn a++
    // while(a <= 10){
    //     cout << "hore re " << a << endl;
    //     a++;
    // }

    while(a <= 10){
        cout << "hore aa";
        cout << a << endl;
        a += 1;
    }

    cout << "selesai" << endl;

    cin.get();
    return 0;
}