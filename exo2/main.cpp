// Exo 2
#include <iostream>
using namespace std;

// Fonction pour v�rifier si un nombre est pair
int estMultipleDe2(int nombre) {
    return (nombre % 2 == 0);
}

// Fonction pour v�rifier si un nombre est un multiple de 3
int estMultipleDe3(int nombre) {
    return (nombre % 3 == 0);
}

int main() {
    int nombre;

    // Demande � l'utilisateur d'entrer un nombre
    cout << "Entrez un nombre entier : ";
    cin >> nombre;

    // Utilise les fonctions pour d�terminer si le nombre est pair et/ou un multiple de 3
    int multipleDe2 = estMultipleDe2(nombre);
    int multipleDe3 = estMultipleDe3(nombre);
    // Affiche les r�sultats en fonction des valeurs renvoy�es par les fonctions
    if (multipleDe2) {
        cout << nombre << " est pair." << endl;
    }

    if (multipleDe3) {
        cout << nombre << " est un multiple de 3." << endl;
    }

    if (multipleDe2 && multipleDe3) {
        cout << nombre << " est un multiple de 6." << endl;
    }

    return 0;
}
