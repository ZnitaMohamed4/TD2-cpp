// EXO 1
#include <iostream>
using namespace std;
int nbrAppl = 0; // initislisation du compteur (variable globale)


void afficherNombreAppels() {

    nbrAppl++;
    cout << "appel numero " << nbrAppl << endl;
}


int main() {
    // Appel de la méthode
    afficherNombreAppels();
    afficherNombreAppels();
    afficherNombreAppels();

     return 0;
}

