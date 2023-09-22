#include <iostream>
#include <string>
#include <vector>
#include "fonctions_pile.h";

using namespace std;

int TaillePile(vector <Action_s> &Vector)
{
	return Vector.size();
}

Action_s DernierElement(vector <Action_s> &Vector) // qsq qui se passe si vect est vide (0) ??
{
	return Vector[TaillePile(Vector) - 1];
	//if return quoi?
}

void Empiler(vector <Action_s> &Vector, Action_s Orientation) // only struct as parameter; vector global! CHANGE
{
	Vector.push_back(Orientation);
}

Action_s Depiler(vector <Action_s> &Vector) // pas de parametre !! a changer
{
	Action_s LastAction = DernierElement(Vector);
	Vector.pop_back();
	return LastAction;
}

void Vectorprint(vector <Action_s>& Vector)
{
	for (int i = 0; i < Vector.size(); i++)
	{
		cout << Vector[i].Action;
	}

}