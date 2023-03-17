#include <iostream>
#include "Prostopadloscian.h"
#include "Walec.h"

using namespace std;

int main() {
	cout << "PROSTOPADLOSCIAN:" << endl;
	Prostopadloscian* obj1= new Prostopadloscian();
	Prostopadloscian* obj2 = new Prostopadloscian("prostopadloscian");
	
	cout << "\nDESTRUKTORY:" << endl;
	delete obj1;
	delete obj2;

	cout << "\nWALEC:" << endl;
	Walec* obj3 = new Walec();
	Walec* obj4 = new Walec("walec");
	
	cout << "\nDESTRUKTORY:" << endl;
	delete obj3;
	delete obj4;

	return 0;
}