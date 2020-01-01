#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int = 0, int = 0);
    friend int operator==(point, point);
};

point::point(int x, int y)
{
    this->x = x;
    this->y = y;
}
int operator==(point a, point b)
{
    return a.x == b.x && a.y == b.y;
}
