#include "iostream"
#include "ex2-a.h"
using namespace std;

vecteur::vecteur() // la definition de constructeur initialier a 0
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}
vecteur::vecteur(double a, double b, double c) // la definition de constructeur
{
    this->x = a;
    this->y = b;
    this->z = c;
}
void vecteur ::affiche() // la definition de fonction affiche
{

    cout << "les coordonne sont : \n"
         << "x : " << x << "\n"
         << "y : " << y << "\n"
         << "z : " << z << "\n";
}
// la fonction pour tester
int main()
{
    vecteur v1;
    v1.affiche();
    vecteur v2(1.1, 2.2, 3.3);
    v2.affiche();
    return 0;
}