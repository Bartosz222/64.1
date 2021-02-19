#include "obraz.h"
#include <string>
using namespace std;

void obraz::zapisDoVectora(){
	string str;
	int test=1;
	while(!wejscie.eof()){
		wejscie>>str;
		if(str==""){
			if(sprawdzCzyRewers(black,white)==true){
				iloscRewers++;
			}
			black = 0;
			white = 0;
			continue;
		}
		else{
			if(test < 19)continue;
			else{
				for(int i =0;i<str.length()-2;i++){
					obrazek.push_back(str[i]);
					liczenie();
				}
			}
		}
		if(test == 20) test=0;
		else test++;
	}
}
void obraz::liczenie(){
	for(int i=0;i<obrazek.size();i++){
		if(obrazek[i] == 1) black++;
		else white++;
	}
	
}
bool obraz::sprawdzCzyRewers(int black,int white){
	if(black>white)return true;
	else return false;
}
