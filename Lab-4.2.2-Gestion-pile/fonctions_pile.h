#ifndef FO_PILE_H

#define UTILITAIRES_PILE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Action_s
{
	string Action;
};

const Action_s Nord = { "Nord" };
const Action_s Sud = { "Sud" };
const Action_s Est = { "Est" };
const Action_s Ouest = { "Ouest" };



int TaillePile();
Action_s DernierElement();
void Empiler(Action_s &Orientation);
Action_s Depiler();
void Vectorprint();


#endif
