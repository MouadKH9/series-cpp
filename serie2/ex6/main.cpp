#include <cstdlib>
#include <iostream>
#include "vect.h"
#include "matrice.h"
using namespace std;

int main()
{
    vect w(1, 2, 3);
    vect res;
    double tb[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    matrice a = tb;
    //si le prof a demander de bien voir les resulat
    // int i;
    // int j;
    // for (i = 0; i < 3; i++)
    //     for (j = 0; j < 3; j++)
    //         cout << tb[i][j] << "\t";

    // cout << "\n";
    // w.affiche();
    res = prod(a, w);
    res.affiche();

    return 0;
}
