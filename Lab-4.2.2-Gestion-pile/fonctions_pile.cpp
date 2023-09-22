#include <iostream>
#include <string>
#include <vector>
#include "fonctions_pile.h";

using namespace std;

int TaillePile(vector <Action_s> Vector)
{
	return Vector.size();
}

Action_s DernierElement(vector <Action_s> Vector) // qsq qui se passe si vect est vide (0) ??
{
	return Vector[TaillePile(Vector) - 1];
	//if return quoi?
}