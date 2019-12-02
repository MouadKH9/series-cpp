#include "vect.h"
#include "matrice.h"
#include <iostream>

using namespace std;
matrice::matrice() {}            // definition de constructeur
matrice::matrice(double t[3][3]) // definition de constructeur
{
    int i;
    int j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            mat[i][j] = t[i][j];
}