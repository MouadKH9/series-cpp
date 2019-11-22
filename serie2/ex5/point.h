#ifndef POINT
#define POINT
class point
{
    int x, y;

public:
    point(int abs = 0, int ord = 0)
    {
        x = abs;
        y = ord;
    }
    friend void affiche(point p);
};
#endif