// Exo 8
#include <iostream>
using namespace std;

class Complexe {
private:
    double reel;
    double imaginaire;

public:
    Complexe(double reel, double imaginaire) {
        this->reel = reel;
        this->imaginaire = imaginaire;
    }

    Complexe Addition(Complexe autre) {
        double reel_result = reel + autre.reel;
        double imaginaire_result = imaginaire + autre.imaginaire;
        return Complexe(reel_result, imaginaire_result);
    }

    Complexe Soustraction(Complexe autre) {
        double reel_result = reel - autre.reel;
        double imaginaire_result = imaginaire - autre.imaginaire;
        return Complexe(reel_result, imaginaire_result);
    }

    Complexe Multiplication(Complexe autre) {
        double reel_result = (reel * autre.reel) - (imaginaire *autre.imaginaire);
        double imaginaire_result = (reel * autre.imaginaire) + (imaginaire * autre.reel);
        return Complexe(reel_result, imaginaire_result);
    }

    Complexe Division(Complexe autre) {
        double denominator = autre.reel * autre.reel + autre.imaginaire *autre.imaginaire;
        double reel_result = (reel * autre.reel + imaginaire * autre.imaginaire) / denominator;
        double imaginaire_result = (imaginaire * autre.reel - reel * autre.imaginaire) / denominator;
        return Complexe(reel_result, imaginaire_result);
    }

    bool operator==(Complexe autre) {
        return (reel == autre.reel) && (imaginaire == autre.imaginaire);
    }

    void afficheNbrCmplx() {
        cout << reel << " + " << imaginaire << "i" << endl;
    }
};

int main() {
    double reel1, imaginaire1, reel2, imaginaire2;
    int choix;

    cout << "Veuiller taper la partie reel du premier Nombre ";
    cin >> reel1;
    cout << "Veuiller taper la partie imaginaire du premier Nombre : ";
    cin >> imaginaire1;

    cout << "Veuiller taper la partie reel du deuxieme Nombre : ";
    cin >> reel2;
    cout << "Veuiller taper la partie imaginaire du deuxieme Nombre : ";
    cin >> imaginaire2;

    Complexe nbr1(reel1, imaginaire1);
    Complexe nbr2(reel2, imaginaire2);

    cout << "--- MENU - O P E R A T I O N S <<COMPLEXE>> ---" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Soustraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Egalite" << endl;
    cout << "Choisissez une operation (1/2/3/4/5) : ";
    cin >> choix;

    Complexe resultat(0, 0);

    switch (choix) {
    case 1:
        resultat = nbr1.Addition(nbr2);
        cout << "Resultat de l'addition : ";
        break;
    case 2:
        resultat = nbr1.Soustraction(nbr2);
        cout << "Resultat de la soustraction : ";
        break;
    case 3:
        resultat = nbr1.Multiplication(nbr2);
        cout << "Resultat de la multiplication : ";
        break;
    case 4:
        resultat = nbr1.Division(nbr2);
        cout << "Resultat de la division : ";
        break;
    case 5:
        if (nbr1 == nbr2) {
            cout << "les deux nombres complexe sont egaux" << endl;
        }
        else {
          cout << "les deux nombres complexe ne sont pas egaux" << endl;
        }
        return 0;
    default:
 cout << "Choix invalide. Essayer avec une choix valide(1/2/3/4/5/6) " << endl;
        return 1;
    }

    resultat.afficheNbrCmplx();
    return 0;
}
