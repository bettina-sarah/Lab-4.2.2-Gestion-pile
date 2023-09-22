#include <iostream>
#include <string>
#include <vector>
#include "fonctions_pile.h";

using namespace std;

void main(void)
{
	vector <Action_s> Directions = { Est, Est, Est, Nord, Ouest, Ouest, Ouest };
	
	for (int i = 0; i < Directions.size(); i++)
	{
		Empiler(Directions[i]);
	}
	
	cout << TaillePile();
	Vectorprint();
	cout << "\n\n";

	for (int i = 0; i < 5; i++)
	{
		Depiler();
	}
	
	cout << TaillePile();
	Vectorprint();

	vector <Action_s> Directionss = { Sud, Ouest, Sud, Ouest, Nord};

	for (int i = 0; i < Directionss.size(); i++)
	{
		Empiler(Directionss[i]);
	}

	for (int i = 0; i < 6; i++)
	{
		Depiler();
	}
	cout << "\n\nfinal pile\n\n";
	cout << TaillePile();
	Vectorprint();

}
