#include <iostream>
#include "pile_entier.h"

using namespace std;

pile_entier::pile_entier(int n)
{
    this->tab = new int[n];
    this->index = 0;
    this->taille = n;
}
pile_entier::pile_entier()
{
    this->tab = new int[20];
    this->index = 0;
    this->taille = 20;
}

pile_entier::~pile_entier()
{
    delete[] this->tab;
}

void pile_entier::empile(int n)
{
    if (this->pleine())
    {
        cout << "On peut pas ajouter la valeur " << n << " car la pile est pleine!" << endl;
        return;
    }
    this->tab[index] = n;
    this->index++;
}
int pile_entier::depile()
{
    if (this->vide())
    {
        cout << "La pile est vide!" << endl;
        return 0;
    }
    int val = this->tab[index - 1];
    this->index--;
    return val;
}
int pile_entier::vide()
{
    return index == 0;
}

int pile_entier::pleine()
{
    return index == taille;
}