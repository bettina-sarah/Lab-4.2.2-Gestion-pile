#include <iostream>
#include <string>
#include <vector>
#include "fonctions_pile.h";

using namespace std;

void main(void)
{
	vector <Action_s> Pile;
	vector <Action_s> Directions = { Est, Est, Est, Nord, Ouest, Ouest, Ouest };
	
	for (int i = 0; i < Directions.size(); i++)
	{
		Empiler(Pile, Directions[i]);
	}
	
	cout << TaillePile(Pile);
	Vectorprint(Pile);
	cout << "\n\n";

	for (int i = 0; i < 5; i++)
	{
		Depiler(Pile);
	}
	
	cout << TaillePile(Pile);
	Vectorprint(Pile);

	vector <Action_s> Directionss = { Sud, Ouest, Sud, Ouest, Nord};

	for (int i = 0; i < Directionss.size(); i++)
	{
		Empiler(Pile, Directionss[i]);
	}

	for (int i = 0; i < 6; i++)
	{
		Depiler(Pile);
	}
	cout << "\n\nfinal pile\n\n";
	cout << TaillePile(Pile);
	Vectorprint(Pile);
	

	//cout<< "\nremoved: "<<Depiler(Pile).Action;
	//cout << TaillePile(Pile);



	
}
