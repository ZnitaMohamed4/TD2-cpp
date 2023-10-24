// Exo3
// 1ere part :
#include <iostream>
using namespace std;

int main() {
    int T[10];
    int i;

    // Saisie des 10 nombres dans le tableau
    for (i = 0; i < 10; i++) {
        cout << "Entrer un nombre : ";
        cin >> T[i];
    }

    int plusGrand = T[0]; // Initialisation du plus grand
    int plusPetit = T[0]; // Initialisation du plus petit

    // Recherche du plus grand et du plus petit
    for (i = 0; i < 10; i++) {
        if (T[i] > plusGrand) {
            plusGrand = T[i];
        }

        if (T[i] < plusPetit) {
            plusPetit = T[i];
        }
    }

    // Affichage des résultats
    cout << "Le plus grand nombre est : " << plusGrand << endl;
    cout << "Le plus petit nombre est : " << plusPetit << endl;

    return 0;
}

// 2eme part :
/* #include <iostream>

int main() {
    int tableau[10];
    int* ptr; // Déclaration d'un pointeur pour parcourir le tableau

    // Saisie des 10 nombres dans le tableau
    for (ptr = tableau; ptr < tableau + 10; ptr++) {
        cout << "Entrez un nombre : ";
        cin >> *ptr;
    }

    // Initialisation des pointeurs pour le plus grand et le plus petit
    int* ptrPlusGrand = tableau;
    int* ptrPlusPetit = tableau;

    // Recherche du plus grand et du plus petit
    for (ptr = tableau + 1; ptr < tableau + 10; ptr++) {
        if (*ptr > *ptrPlusGrand) {
            ptrPlusGrand = ptr;
        }
        if (*ptr < *ptrPlusPetit) {
            ptrPlusPetit = ptr;
        }
    }

    // Affichage des résultats
    cout << "Le plus grand nombre est : " << *ptrPlusGrand << endl;
    cout << "Le plus petit nombre est : " << *ptrPlusPetit << endl;
    return 0;
}



