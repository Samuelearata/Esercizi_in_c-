//Scrivere un programma che implementa un turno di gioco di forbice carta sasso, ovvero che legge in input la mossa dei due
//giocatori e restituisce in output chi ha vinto
#include <iostream>
using namespace std;


int main()
{
    char a,b;
    cout << "per scegliere forbice scrivi F "<<endl;
    cout << "per scegliere carta scrivi C "<<endl;
    cout << "per scegliere sasso scrivi S "<<endl;
    cout << "inserisci la giocata del player 1 " << endl;
    cin >> a ;
    cout << "inserisci la giocata del player 2 " << endl;
    cin >> b ;

    if(a==b){
        cout << "i giocatori hanno pareggiato" << endl;
    }
    else
    if(a == 'F' && b == 'C'){
        cout << "vince il player 1" << endl;
    }
    if(a == 'C' && b == 'S'){
        cout << "vince il player 1" << endl;
    }
    if(a == 'S' && b == 'F'){
        cout << "vince il player 1" << endl;
    }
      if(a == 'C' && b == 'F'){
        cout << "vince il player 2" << endl;
    }
    if(a == 'S' && b == 'C'){
        cout << "vince il player 2" << endl;
    }
    if(a == 'F' && b == 'S'){
        cout << "vince il player 2" << endl;
    }
    
    

    return 0;

}