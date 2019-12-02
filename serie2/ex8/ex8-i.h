#include <iostream>
using namespace std;
// avec des fonction membre
class vecteur3d
{
    float x, y, z;

public:
    vecteur3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0) // constructeur
    {
        x = c1;
        y = c2;
        z = c3;
    }
    int operator==(vecteur3d); // operateur ==
    int operator!=(vecteur3d); // operateur !=
};