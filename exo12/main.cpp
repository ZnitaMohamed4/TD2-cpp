#include <iostream>

using namespace std;

class Test {
public:
    static int cmp;

    void call() {
        cmp++; // incrementation du compteur
    }
};

int Test::cmp = 0;

int main() {
    Test tryTo;

    // Appel de la fonction
    tryTo.call();
    tryTo.call();
    tryTo.call();
    tryTo.call();
    tryTo.call();

    // Affichons le nombre d'appels
  cout << "La fonction a ete appelee " << Test::cmp <<" fois"<< endl;

    return 0;
}
