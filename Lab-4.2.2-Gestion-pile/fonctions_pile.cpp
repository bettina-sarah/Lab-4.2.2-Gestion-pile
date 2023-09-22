#include <iostream>
#include <string>
#include <vector>
#include "fonctions_pile.h";

using namespace std;

vector <Action_s> Pile;

int TaillePile()
{
	return Pile.size();
}

Action_s DernierElement() // qsq qui se passe si vect est vide (0) ??
{
	return Pile[TaillePile() - 1];
	//if return quoi?
}

void Empiler(Action_s &Orientation) // only struct as parameter; vector global! CHANGE
{
	Pile.push_back(Orientation);
}

Action_s Depiler() // pas de parametre !! a changer
{
	Action_s LastAction = DernierElement();
	Pile.pop_back();
	return LastAction;
}

void Vectorprint()
{
	for (int i = 0; i < Pile.size(); i++)
	{
		cout << Pile[i].Action;
	}
}