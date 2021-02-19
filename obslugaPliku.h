#ifndef obslugaPliku_h
#define obslugaPliku_h
#include<fstream>
#include<iostream>
using namespace std;
class obslugaPliku {
public:
	ifstream wejscie;
	ofstream wyjscie;
	obslugaPliku();
	~obslugaPliku();
	bool sprawdzPlik();

};

#endif
