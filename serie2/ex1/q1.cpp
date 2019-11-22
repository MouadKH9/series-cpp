#include <iostream>

using namespace std;

class Vecteur
{
    double x, y, z;

public:
    void initialise(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void homothetie(double k)
    {
        x *= k;
        y *= k;
        z *= k;
    }
    void affiche()
    {
        cout << "X : " << x << " Y: " << y << " Z: " << z << endl;
    }
};

int main()
{
    Vecteur v1;
    v1.initialise(1, 2, 3);
    v1.affiche();
    v1.homothetie(2);
    v1.affiche();
    return 0;
}