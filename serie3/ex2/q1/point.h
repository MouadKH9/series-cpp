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

class pointcol : public point
{
    int col;

public:
    pointcol(float x, float y, int col) : point(x, y)
    {
        this->col = col;
    }

    void affiche()
    {
        point ::affiche();
        cout << "la couleur est :" << col << endl;
    }
    void color(int col)
    {
        this->col = col;
    }
};