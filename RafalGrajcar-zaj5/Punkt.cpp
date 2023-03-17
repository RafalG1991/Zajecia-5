#include "Punkt.h"

using namespace std;

Punkt::Punkt() {
	cout << "Kontruktor domyslny punkt" << endl;
}

Punkt::Punkt(string nazwa) {
	cout << "Kontruktor parametryczny punkt " << nazwa << endl;
}

Punkt::~Punkt() {
	cout << "Destruktor domyslny punkt" << endl;
}

