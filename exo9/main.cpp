// Exo 9
#include <iostream>
using namespace std;

class Animal {
protected:
	string Nom;
	int Age;
public:
	void setValue(string nom, int age) {

		Nom = nom;
		Age = age;

	}
};

class Dolphin : public  Animal {
public:
	string LieuOrigine;
	void DefineYourself() {
cout << "i am a dolphin, my name is " << Nom << " , i have " << Age << " years old, i came from " << LieuOrigine;
	}
};

class Zebra : public Animal {

public:
	string LieuOrigine;

	void DefineYourself() {
cout << "i am  a zebra, my name is " << Nom << " , i have " << Age << " years old, i came from " << LieuOrigine;
	}
};

int main() {

	Dolphin d;
	d.setValue("Jack", 12);
	d.LieuOrigine = "Austria \n";
	d.DefineYourself();

	Zebra z;
	z.setValue("Mia", 7);
	z.LieuOrigine = "Africa \n";
	z.DefineYourself();

}
