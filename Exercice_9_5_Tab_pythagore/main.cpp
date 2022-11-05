#include <iostream>
using namespace std;

#include "fonctions.h"

int main(){
	unsigned int x, y;
	cout << "Saisir deux valeurs :" << endl;
	cin >> x >> y;

	Table_de_pythagore(x, y);

	return 0;
}