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
    int operator==(point p)
    {
        return (this->x == p.x && this->y == p.y);
    }
};
#endif