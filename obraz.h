#ifndef obraz_h
#define obraz_h
#include<iostream>
#include<vector>
#include"obslugaPliku.h"
using namespace std;
class obraz: public obslugaPliku{
	public:
		vector<int>obrazek;
		int iloscRewers=0;
		int black=0,white=0;
	void zapisDoVectora();
	void liczenie();
	bool sprawdzCzyRewers(int black,int white);
};

#endif
