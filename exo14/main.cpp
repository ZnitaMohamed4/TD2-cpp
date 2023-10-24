#include <iostream>
#include <vector>

using namespace std;

class Pile {
private:
    vector<int> elements;

public:
    Pile() {}

    void push(int value) {
        elements.push_back(value);
    }

    bool pop(int &value) {
        if (!elements.empty()) {
            value = elements.back();
            elements.pop_back();
            return true; // Succès
        } else {
            cout << endl;
            cout << "La pile est vide. Impossible de depiler." << endl;
            return false; // Échec
        }
    }
};

int main() {
    Pile p1;
    Pile p2;

    // Empile des valeurs sur p1
    for (int i = 1; i <= 5; ++i) {
        p1.push(i * 10);
    }

    // Empile des valeurs sur p2
    for (int i = 100; i <= 150; i += 10) {
        p2.push(i);
    }

    // Dépile et affiche les valeurs de p1
    cout << "Depilement de p1 : ";
    int value;
    while (p1.pop(value)) {
        cout << value << " ";
    }
    cout << endl;

    // Dépile et affiche les valeurs de p2
    cout << "Depilement de p2 : ";
    while (p2.pop(value)) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
