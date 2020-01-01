#include <iostream>
using namespace std;

class pointcol
{
    float x, y;
    int col;

public:
    pointcol(float x, float y, int col)
    {
        this->x = x;
        this->y = y;
        this->col = col;
    }

    void affiche()
    {

        cout << "les cordonnees X = " << x << " Y = " << y << "\n"
             << "la couleur est :" << col << endl;
    }
    void color(int col)
    {
        this->col = col;
    }
};