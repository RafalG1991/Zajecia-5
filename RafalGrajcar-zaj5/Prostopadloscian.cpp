#include "Prostopadloscian.h"

using namespace std;

Prostopadloscian::Prostopadloscian() {
	cout << "Kontruktor domyslny prostopadloscian" << endl;
}

Prostopadloscian::Prostopadloscian(string nazwa) : Kwadrat(nazwa) {
	cout << "Kontruktor parametryczny prostopadloscian " << nazwa << endl;
}

Prostopadloscian::~Prostopadloscian() {
	cout << "Destruktor domyslny prostopadloscian" << endl;
}