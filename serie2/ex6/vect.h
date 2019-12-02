#include <iostream>
using namespace std;
class matrice;
class vect
{
    double v[3];

public:
    vect(double, double, double);                    // constructeur
    friend vect prod(const matrice &, const vect &); // fonction amie pour faire le produit
    void affiche();                                  // pour afficher la valeur de vecteur
};
