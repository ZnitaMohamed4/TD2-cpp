#include <iostream>
#include <string>

using namespace std;

int main() {
    // Saisie de la cha�ne au format JJMMAAAAHHNN
    string dateHeure;
    cout << "Entrez une date et une heure au format JJMMAAAAHHNN : ";
    cin >> dateHeure;

    // V�rification de la longueur de la cha�ne
    if (dateHeure.length() != 12) {
        cout << "Format invalide. La chaine doit avoir exactement 12 caracteres." << endl;
        return 1;
    }

    // Extraction des diff�rents champs
    string jour = dateHeure.substr(0, 2);
    string mois = dateHeure.substr(2, 2);
    string annee = dateHeure.substr(4, 4);
    string heure = dateHeure.substr(8, 2);
    string minute = dateHeure.substr(10, 2);

    // Affichage des champs
    cout << "Jour : " << jour << endl;
    cout << "Mois : " << mois << endl;
    cout << "Ann�e : " << annee << endl;
    cout << "Heure : " << heure << endl;
    cout << "Minute : " << minute << endl;

    return 0;
}
