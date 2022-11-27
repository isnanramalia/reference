#include <iostream>
using namespace std;

int main(){
    
    /*
        for(inisialisasi; loop kondisi; increment){
        statemen
    }
    */

    cout << "Loop 1 \n";
    for(int counter = 1; counter <= 10; counter++){
        cout << counter << endl;
    }

    cout << "Loop 2 \n";
    for(int counter = 1; counter <= 10; counter+=2){//counter += 2: akan nambah 2 setiap looping
        cout << counter << endl;
    }

    cout << "Loop 3 \n";
    for(int counter = 1; counter >= -10; counter--){//counter += 2: akan nambah 2 setiap looping
        cout << counter << endl;
    }

    int total = 0;
    cout << "Loop 4 \n";
    for(int counter = 1; counter <= 10; counter++){//counter += 2: akan nambah 2 setiap looping
        total += counter;
        cout << counter << "||" << total << endl;
    }

    cout << "selesai";

    return 0;
}