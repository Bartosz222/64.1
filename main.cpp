#include <iostream>
#include "obslugaPliku.h"
#include "obraz.h"
using namespace std;
int main(){
    obslugaPliku p1;
    obraz b1;
    p1.sprawdzPlik();
    if(p1.sprawdzPlik() == false)exit(0);
    else{
    	b1.zapisDoVectora();
    	cout<<b1.iloscRewers;
	}
    return 0;
}
