#include "point.h"
// #include <iostream>

// using namespace std;
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