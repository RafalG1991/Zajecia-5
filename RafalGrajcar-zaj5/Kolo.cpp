#include "Kolo.h"

using namespace std;

Kolo::Kolo() {
	cout << "Kontruktor domyslny kolo" << endl;
}

Kolo::Kolo(string nazwa): Punkt(nazwa) {
	cout << "Kontruktor parametryczny kolo " << nazwa << endl;
}

Kolo::~Kolo() {
	cout << "Destruktor domyslny kolo" << endl;
}