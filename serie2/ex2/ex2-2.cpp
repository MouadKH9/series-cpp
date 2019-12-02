#include "iostream"
#include "ex2-2.h"
using namespace std;

vecteur::vecteur() // la definition de constructeur
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
double vecteur::prod_scal(vecteur v) // la definition de fonction prod_scal
{
    return (x * v.x + y * v.y + z * v.z);
}
void vecteur ::affiche() // la definition de fonction affiche
{

    cout << "les coordonne sont :\n"
         << "x : " << x << "\n"
         << "y : " << y << "\n"
         << "z : " << z << "\n";
}
// la fonction de test
int main()
{
    vecteur v1(1.1, 1.1, 1.1);
    vecteur v2(2.2, 2.2, 2.2);
    v1.affiche();
    v2.affiche();
    cout << "V1.V2 = " << v1.prod_scal(v2) << "\n";

    return 0;
}