#include "iostream"

class vecteur
{
    double x, y, z; // les trois composantes de vecteur

public:
    vecteur();                       // le constructeur pour initialiser le vecteur a 0
    vecteur(double, double, double); // le constructeur pour initialiser le vecteur
    void affiche();                  // pour afficher les trois composantes
};
