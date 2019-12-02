#include "vect.h"
#include "matrice.h"
#include <iostream>
using namespace std;

vect::vect(double v1 = 0, double v2 = 0, double v3 = 0) // definition de constructeur
{
    v[0] = v1;
    v[1] = v2;
    v[2] = v3;
}
vect prod(const matrice &m, const vect &x) // le produit d'une matrice et un vecteur
{
    int i, j;
    double som;
    vect res;
    for (i = 0; i < 3; i++)
    {
        for (j = 0, som = 0; j < 3; j++)
            som += m.mat[i][j] * x.v[j];
        res.v[i] = som;
    }
    return res;
}
void vect::affiche() // definition de fonction affiche
{
    int i;
    for (i = 0; i < 3; i++)
        cout << v[i] << " ";
    cout << "\n";
}