#include "point.h"

class pointcol : public point
{
    int cl;

public:
    pointcol(int = 0, int = 0, int = 0); // éventuelles fonctions membre
};

pointcol ::pointcol(int x, int y, int cl) : point(x, y)
{
    this->cl = cl;
}