#include <iostream>
using namespace std;
class vect; // pour l'utiliser dans la fonction produit
class matrice
{
    double mat[3][3];

public:
    matrice();                                       // constructeur
    matrice(double t[3][3]);                         // constructeur
    friend vect prod(const matrice &, const vect &); //pour calculer le produit d'une matrice et un vecteur
};
