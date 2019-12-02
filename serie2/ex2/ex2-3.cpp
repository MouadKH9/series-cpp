#include "iostream"
#include "ex2-3.h"
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
vecteur vecteur::somme(vecteur v) // la definition de fonction somme
{
    vecteur res;
    res.x = x + v.x;
    res.y = y + v.y;
    res.z = z + v.z;
    return res;
}
void vecteur ::affiche() // la definition de fonction affiche
{

    cout << "les coordonne sont :\n"
         << "x : " << x << "\n"
         << "y : " << y << "\n"
         << "z : " << z << "\n";
}
// la fonction main pour le test
int main()
{
    vecteur v1(1.1, 1.1, 1.1);
    vecteur v2(2.2, 2.2, 2.2);
    vecteur v3;
    v1.affiche();
    v2.affiche();
    v3 = v1.somme(v2);
    v3.affiche();

    return 0;
}
