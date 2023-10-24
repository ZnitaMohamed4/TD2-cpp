// Exo 6
#include <iostream>

using namespace std;
// 1. Fonction pour incrémenter une variable en transmettant l'adresse.
void incrementer(int* ptr) {
	(*ptr)++; // Déférencement du pointeur pour incrémenter la valeur.
}

// 2. Fonction pour permuter deux variables en transmettant l'adresse

void permuter(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

// 3. Fonction pour incrementer une variable en utilisant la transmission par référence.

void incrementerParRef(int  & var) { // idem pour declarer un ref
	var++;
}

// 4. Fonction pour permuter deux variables en utilisant la transmission par référence.

void permuterParRef(int &a, int &b) { // passage par ref il faut declarer les variables avec le symbole &

	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {

	int x = 12;
	int y = 6;

	cout << "avant incrementation :" << x << endl;
	incrementer( &x);
	cout << "apres incrementation :" << x << endl;

cout << "Avant permuter(&x, &y) : x = " << x << ", y = " << y << endl;

	permuter( &x , &y);

cout << "apres permuter(&x, &y) : x = " << x << ", y = " << y << endl; \

		cout << "Passage par ref" << endl;
	int a = 5;
	int b = 10;

	cout << "Avant l'incrementation " << a << endl;

     incrementerParRef(a);

cout << "apres l'incrementation " << a << endl;


cout << "avant permuterParRef(a,b) a = " << a << ", b = " << b << endl;

	permuterParRef(a, b);

cout << "avant permuterParRef(a,b) a = " << a << ", b = " << b << endl;

	return 0;
}

