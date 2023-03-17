#include "Kwadrat.h"

using namespace std;

Kwadrat::Kwadrat() {
	cout << "Kontruktor domyslny kwadrat" << endl;
}

Kwadrat::Kwadrat(string nazwa): Punkt(nazwa) {
	cout << "Kontruktor parametryczny kwadrat " << nazwa << endl;
}

Kwadrat::~Kwadrat() {
	cout << "Destruktor domyslny kwadrat" << endl;
}