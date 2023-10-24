// Exo 10
#include <iostream>
#include <string>

using namespace std;

class Personne {
private:
    string Nom;
    string Prenom;
    string DateNaissance;

public:
    Personne(string nom, string prenom, string dateNaissance) {
        Nom = nom;
        Prenom = prenom;
        DateNaissance = dateNaissance;

    }

    virtual void afficherDonnee() {
        cout << "Nom : " << Nom << endl;
        cout << "Prenom : " << Prenom << endl;
        cout << "Date de Naissance : " << DateNaissance << endl;
    }
};

class Employe : public Personne {
private:
    double Salaire;

public:
 Employe(string nom, string prenom, string dateNaissance, double salaire) : Personne(nom, prenom, dateNaissance) {
        Salaire = salaire;
    }

    void afficherDonnee() override {
        Personne::afficherDonnee();
        cout << "Salaire : " << Salaire << " DH " << endl;
    }
};

class Chef : public Employe {
private:
    string Service;

public:
    Chef(string nom, string prenom, string dateNaissance, double salaire, string service)
        : Employe(nom, prenom, dateNaissance, salaire) {
        Service = service;
    }

    void afficherDonnee() override {
        Employe::afficherDonnee();
        cout << "Service : " << Service << endl;
    }
};

class Directeur : public Chef {
private:
    string Societe;

public:

  Directeur(string nom, string prenom, string dateNaissance, double salaire, string service, string societe)
        : Chef(nom, prenom, dateNaissance, salaire, service) {
        Societe = societe;
    }

    void afficherDonnee() override {
        Chef::afficherDonnee();
        cout << "Societe : " << Societe << endl;
    }
};

int main() {
    Personne personne("Znita", "Mohamed", "25/06/2003");
    Employe employe("Mikel", "Owen", "30/03/2002", 13000);
    Chef chef("Chef", "Moha", "8/02/1997", 200000, "ChefCuisine");
    Directeur directeur("Alex", "Kane", "17/05/1985", 150000, "Directeur", "SpaceX");

    personne.afficherDonnee();
    cout << "-------------------------------------\n";
    employe.afficherDonnee();
    cout << "-------------------------------------\n";
    chef.afficherDonnee();
    cout << "-------------------------------------\n";
    directeur.afficherDonnee();

    return 0;
}
