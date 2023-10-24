// Exo 7

#include <iostream>
using namespace std;

int main() {
	double T[50];
	int i, ech, tmp, n;

	// la taille oar l'user

	cout << "Veuiller taper la taille du tableau : ";
	cin >> n;
	// remplissage
	for (i = 0; i < n; i++) {
		cout << "Veuiller taper " << n << " nombres  :  ";
		cin >> T[i];
	}

	// affichage

	cout << " \n \n les elements du tab avant le tri sont : \n \n  ";
	for (i = 0; i < n; i++) {
		cout << "\t" << T[i];
	}

	cout << " \n \n les elements du tab apres le tri sont  : \n \n  ";

	do {
		ech = 0;
		for (i = 0; i < n - 1; i++) {
			if (T[i] > T[i + 1]) {
				tmp = T[i];
				T[i] = T[i + 1];
				T[i + 1] = tmp;
				ech++;
			}
		}


	} while (ech > 0);


	for (i = 0; i < n; i++) {
		cout << "\t" << T[i];
	}
	return 0;

}
