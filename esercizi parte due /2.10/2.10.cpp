#include <iostream>
using namespace std;


int main()
{
    int temp;
    cout << " \n--------------------------------"<<endl;
    
    cout << "\n Inserire la temperatura attuale :" << endl;
    cin >> temp ;


    if(temp>=-20 && temp<=0){
        cout << "\n-Temperatura: Freddo dannato" << endl;
    }
    if(temp>=1 && temp<=15){
        cout << "\n-Temperatura: Freddo" << endl;
    }
    if(temp>=16 && temp<=23){
        cout << "\n-Temperatura: Normale" << endl;
    }
    if(temp>=24 && temp<=30){
        cout << "\n-Temperatura: Caldo" << endl;
    }
    if(temp>=31 && temp<=40){
        cout << "\n-Temperatura: Caldo da morire" << endl;
    }
    if(temp<-20){
        cout << "\n-Termometro Rotto" << endl;
    }
   if(temp>40){
        cout << "\n-Termometro Rotto" << endl;
    }
    