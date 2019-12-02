#include "iostream"

class vecteur
{
    double x, y, z;

public:
    vecteur();                       // le constructeur pour initialiser le vecteur a 0
    vecteur(double, double, double); // le constructeur pour initialiser le vecteur
    double prod_scal(vecteur &);     //  pour calculer le produit scalaire par reference
    vecteur somme(vecteur &);        // pour calculer le somme de deux vecteur par adresse
    void affiche();                  // pour afficher les trois composantess
};