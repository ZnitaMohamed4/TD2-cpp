// Exo5
#include <iostream>
using namespace std;

int main() {


	int a = 19; // déclare un entier a;

	// declaraction d'une reference vers a
	int& ref_a = a;

	// declaraction d'un pointeur vers a

	int* p_a =  &a;

	cout << "a : " << a << endl;
	cout << "ref_a : " << ref_a << endl;
	cout << "p_a : " << p_a << endl;

	return 0;

}

