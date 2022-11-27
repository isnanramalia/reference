#include <iostream>
using namespace std;

int main(){
    //nested loop - daspro tugas folio flowchart, step by step
    int n;

    cout << "input baris: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            for(int k=0; k<i; k++){
                cout << i;
            }
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}