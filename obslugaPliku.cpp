#include "obslugaPliku.h"

obslugaPliku::obslugaPliku() {
	wejscie.open("dane_obrazki.txt");
	wyjscie.open("wynik.txt");
}
obslugaPliku::~obslugaPliku() {
	wejscie.close();
	wyjscie.close();
}
bool obslugaPliku::sprawdzPlik() {
	if (wejscie.good() && wyjscie.good()) return true;
	else return false;
}

