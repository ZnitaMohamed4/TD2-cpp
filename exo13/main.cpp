#include <iostream>

class Point {
private:
    float x;
    float y;

public:
    Point(float x = 0.0, float y = 0.0) : x(x), y(y) {}

    void deplace(float dx, float dy) {
        x += dx;
        y += dy;
    }

    void affiche() const {
        std::cout << "Coordonnees du point : (" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p(3.0, 4.0); // Creation d'un point avec des coordonnees (2.0, 3.0)

    std::cout << "Avant deplacement : ";
    p.affiche();

    p.deplace(1.5, -0.5); // Déplacement du point
    std::cout << "Apres deplacement : ";
    p.affiche();

    return 0;
}

