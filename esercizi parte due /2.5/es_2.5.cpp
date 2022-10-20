 //Scrivere un programma che legge un numero intero da input e stampa se è o no divisibile per 13.
#include <iostream>
using namespace std;


int main()
{
    int a;
    cout << "inserisci il valore a" << endl;
    cin >> a ;
    if(a % 13 ==0){
        cout << "il valore è divisibile per 13 " << endl;
    }
        else
            cout << "Il valore non e` divisibile per 13 " << endl;
        return 0;
    }


