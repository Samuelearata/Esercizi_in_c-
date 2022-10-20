//Scrivere un programma che verifica se tre numeri reali dati in input possono essere i lati di un triangolo, cioè se nessuno di essi è maggiore della somma degli altri due o minore del valore assoluto della loro differenza.


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float l1, l2, l3;
	bool tri = true;
	cout << "Inserire il primo lato: ";
	cin >> l1;
	cout << "Inserire il secondo lato: ";
	cin >> l2;
	cout << "Inserire il terzo lato: ";
	cin >> l3;
	if (l1 > l2 + l3 || l1 < fabs(l2 - l3))
		tri = false;
	if (l2 > l1 + l3 || l2 < fabs(l1 - l3))
		tri = false;
	if (l3 > l1 + l2 || l3 < fabs(l1 - l2))
		tri = false;
	if (tri)
		cout << "I valori possono essere i lati di un triangolo" << endl;
	else
		cout << "I valori non possono essere i lati di un triangolo" << endl;
		
}