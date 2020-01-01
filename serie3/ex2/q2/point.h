#include <iostream>
using namespace std;

class point
{
    float x, y;

public:
    point(float abs, float ord)
    {
        x = abs;
        y = ord;
    }
    void affiche()
    {
        cout << "Coordonnees : " << x << " " << y << "\n";
    }
    void deplace(float dx, float dy)
    {
        x = x + dx;
        y = y + dy;
    }
};
