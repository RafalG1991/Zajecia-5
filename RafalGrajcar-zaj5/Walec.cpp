#include "Walec.h"

using namespace std;

Walec::Walec() {
	cout << "Kontruktor domyslny walec" << endl;
}

Walec::Walec(string nazwa): Kolo(nazwa) {
	cout << "Kontruktor parametryczny walec " << nazwa << endl;
}

Walec::~Walec() {
	cout << "Destruktor domyslny walec" << endl;
}