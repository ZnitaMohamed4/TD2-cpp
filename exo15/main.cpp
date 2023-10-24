#include <iostream>
#include <cstring>

using namespace std;

class Fichier {
private:
    char* P;
    size_t longueur;

public:
    Fichier(size_t taille) : longueur(taille), P(nullptr) {
        P = new char[longueur];
    }

    ~Fichier() {
        delete[] P;
    }

    void Creation() {
        if (P != nullptr) {
            for (size_t i = 0; i < longueur; ++i) {
                P[i] = '\0'; // Initialise l'espace mémoire à zéro
            }
        }
    }

    void Remplit() {
        if (P != nullptr) {
            for (size_t i = 0; i < longueur; ++i) {
                P[i] = 'A'; // Remplissage arbitraire avec 'A' par exemple
            }
        }
    }

    void Affiche() {
        if (P != nullptr) {
            for (size_t i = 0; i < longueur; ++i) {
                cout << P[i];
            }
            cout << endl;
        }
    }
};

int main() {
    size_t taille = 10;
    Fichier* fichier = new Fichier(taille);

    fichier->Creation();
    fichier->Remplit();
    fichier->Affiche();

    delete fichier;

    return 0;
}
