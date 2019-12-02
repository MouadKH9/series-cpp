//	Avec des fonctions membres :
#include <iostream>
#include "ex9-i.h"
using namespace std;
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
void pile_entier::operator<(int n)
{
    if (index < taille)
    {
        tab[index] = n;
        index++;
    }
}
void pile_entier::operator>(int &n) // attention & indispensable ici
{
    if (index > 0)
    {
        n = tab[--index];
    }
}
int pile_entier::vide() // si la pile est vide
{
    return index == 0;
}

int pile_entier::pleine() // si la pile est pleine
{
    return index == taille;
}
// le programme de test
int main()
{
    int i, n;
    pile_entier p(3);
    p < 2;
    p < 5;
    p < 14;
    cout << "Contenu de pile : ";
    for (i = 0; i < 3; i++)
    {
        p > n;
        cout << n << " ";
    }
    cout << "\n";
    return 0;
}
