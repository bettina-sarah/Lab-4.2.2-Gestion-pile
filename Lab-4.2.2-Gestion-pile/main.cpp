#include <iostream>
#include <string>
#include <vector>
#include "fonctions_pile.h";

using namespace std;

void main(void)
{
	vector <Action_s> Pile;
	Pile = { Nord, Sud, Est, Ouest };
	cout << TaillePile(Pile);
	cout << DernierElement(Pile).Action;

}
