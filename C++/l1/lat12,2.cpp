#include <iostream>
using namespace std;
// SOAL DASPRO UTS-B
// UTS smt 1 - no 1
int main()
{
    char kelamin;
    int level;

    cout << "input p/l: ";
    cin >> kelamin;
    if (kelamin == 'l')
    {
        cout << "input level 1-4: ";
        cin >> level;
        switch (level)
        {
        case 1:
            cout << "minta maaf";
            break;
        case 2:
            cout << "diemin aja dulu";
            break;
        case 3:
            cout << "ajak makan";
            break;
        case 4:
            cout << "ajak jalan-jalan";
            break;

        default:
            cout << "inputan salah ya say";
            break;
        }
    }
    else if (kelamin == 'p')
    {
        cout << "input level 1-4: ";
        cin >> level;
        switch (level)
        {
        case 1:
            cout << "minta maaf";
            break;
        case 2:
            cout << "ajak shoping";
            break;
        case 3:
            cout << "beliin kado";
            break;
        case 4:
            cout << "selamatkan dirimu";
            break;

        default:
            cout << "inputan salah ya say";
            break;
        }
    }
    else
    {
        cout << "input level 1-4: ";
        cin >> level;
        cout << "inputan salah nich";
    }
    return 0;
}