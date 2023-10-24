#include <iostream>

using namespace std;

class Liste {
private:
    struct Element {
        int valeur;
        Element* suivant;
        Element(int val) : valeur(val), suivant(nullptr) {}
    };

    Element* premier;

public:
    Liste() : premier(nullptr) {}

    void AjouterDebut(int val) {
        Element* nouvelElement = new Element(val);
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }

    void SupprimerDebut() {
        if (premier != nullptr) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }

    void Afficher() {
        Element* courant = premier;
        while (courant != nullptr) {
            cout << courant->valeur << " ";
            courant = courant->suivant;
        }
        cout << endl;
    }

    ~Liste() {
        while (premier != nullptr) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }
};

int main() {
    Liste maListe;
    maListe.AjouterDebut(23);
    maListe.AjouterDebut(43);
    maListe.AjouterDebut(54);

    maListe.Afficher(); // Affiche : 54 43 23

    maListe.SupprimerDebut();
    maListe.Afficher(); // Affiche : 43 23

    return 0;
}
