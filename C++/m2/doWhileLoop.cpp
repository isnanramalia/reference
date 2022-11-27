#include <iostream>
using namespace std;

int main(){

    int a = 1;

    //perbedaan dgn while: do while psti mlakukan aksi minimal 1x
    do{
        cout << "hore ";
        cout << a << endl;
        a++;
    }while(a <= 10);
    cout << "selesai";

    cin.get();
    return 0;
}