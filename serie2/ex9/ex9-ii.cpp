#include <iostream>
#include "ex9-ii.h"

pile_entier::pile_entier(int n) // constructeur
{
    tab = new int[n];
    index = 0;
    taille = n;
}
pile_entier::~pile_entier() // destructeur
{
    delete[] tab;
}
void operator<(pile_entier &pile, int n) // operateur < pour l'ajout
{
    if (pile.index < pile.taille)
        pile.tab[pile.index++] = n;
}
void operator>(pile_entier &pile, int &n) // operateur > pour la supprission
{
    if (pile.index > 0)
        n = pile.tab[--pile.index];
}
int pile_entier::vide() // si la pile est vide
{
    return index == 0;
}

int pile_entier::pleine() // si la pile est pleine
{
    return index == taille;
}
//le programme de test
main()
{
    int i, n;
    pile_entier p(3);
    p < 2;
    p < 5;
    p < 14;
    cout << "Contenu de p : ";
    for (i = 0; i < 3; i++)
    {
        p > n;
        cout << n << " ";
    }
    cout << "\n";
    return 0;
}
