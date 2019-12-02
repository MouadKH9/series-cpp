#include "iostream"
using namespace std;

class vecteur
{
    double x, y, z;

public:
    inline vecteur();                       // constructeur enligne
    inline vecteur(double, double, double); // constructeur enligne
    inline void affiche();                  // fonction affiche enligne
};
inline vecteur::vecteur() // la definition de constructeur
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}
inline vecteur::vecteur(double a, double b, double c) // la definition de constructeur
{
    this->x = a;
    this->y = b;
    this->z = c;
}
inline void vecteur ::affiche() // la definition de fonction affiche
{

    cout << "les coordonne sont :\n"
         << "x : " << x << "\n"
         << "y : " << y << "\n"
         << "z : " << z << "\n";
}

// la fonction main pour le teste
int main()
{
    vecteur v1;
    v1.affiche();
    vecteur v2(1.1, 2.2, 3.3);
    v2.affiche();
    return 0;
}
