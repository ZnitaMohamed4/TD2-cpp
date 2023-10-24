#include <iostream>
#include <cmath>
using namespace std;

class vecteur3d {
private:
    float x;
    float y;
    float z;

public:
    vecteur3d(float x = 0, float y = 0, float z = 0) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void affichage() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    vecteur3d somme(const vecteur3d& other) const {
        float somme_x = x + other.x;
        float somme_y = y + other.y;
        float somme_z = z + other.z;
        return vecteur3d(somme_x, somme_y, somme_z);
    }

    vecteur3d produit(const vecteur3d& other) const {
        float produit_x = x * other.x;
        float produit_y = y * other.y;
        float produit_z = z * other.z;
        return vecteur3d(produit_x, produit_y, produit_z);
    }

    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }

    void coincide(const vecteur3d& other) const {
        if (x == other.x && y == other.y && z == other.z) {
            cout << "Les deux vecteurs sont egaux." << endl;
        }
        else {
            cout << "Les vecteurs ne sont pas egaux." << endl;
        }
    }

    static void normax(const vecteur3d& v1, const vecteur3d& v2) {
        float norme1 = v1.norme();
        float norme2 = v2.norme();
        if (norme1 < norme2) {
            cout << "Le vecteur avec la plus grande norme : ";
            v2.affichage();
        }
        else {
            cout << "Le vecteur avec la plus grande norme : ";
            v1.affichage();
        }
    }
};

int main() {
    vecteur3d v1(2, 4, 3);
    vecteur3d v2(1, 5, 2);
    vecteur3d v3 = v1.somme(v2);

    cout << "Vecteur 1 : ";
    v1.affichage();
    cout << "Vecteur 2 : ";
    v2.affichage();
    cout << "Somme des vecteurs : ";
    v3.affichage();

    vecteur3d v4 = v1.produit(v2);

    cout << "Produit des vecteurs : ";
    v4.affichage();

    cout << "Norme de Vecteur 1 : " << v1.norme() << endl;

    cout << "Coincidence des vecteurs : ";
    v1.coincide(v2);

    cout << "Vecteur avec la plus grande norme : ";
    vecteur3d::normax(v1, v2);

    return 0;
}
