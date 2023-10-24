// exo4
#include <iostream>
using namespace std;
int main() {

	int n=0; // la taille du tab
	while (n <= 0) { // controle de saisie
		cout << "Veuiller entrer la taille du Tab svp : ";
		cin >> n;

	}
	  int * T1 = new int[n]; // allocation dynamique de la 1ere tab
	// syntaxe pour alloue dynamiquement une tableau d'entiers //
	cout << "Veuiller entrer " << n << " nombres entiers :";
		for (int i = 0; i < n; i++) {
			cin >> T1[i] ;
		}
		int * T2 = new int[n];

		for (int i = 0; i < n; i++) {
			 T2[i] = T1[i] * T1[i];
		}
		cout << endl;
		delete[] T1;

cout << "les valeurs de la deuxieme tableau 2 (carres) sont :" << endl;
		for (int i = 0; i < n; i++) {
			cout << T2[i] << "\t";
		}

		delete[] T2; // allouer l'espace memoire de deuxieme table

	return 0;
}
