#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int = 0, int = 0);
    point operator+(point);
};

point::point(int x, int y)
{
    this->x = x;
    this->y = y;
}
point point ::operator+(point b)
{
    point res;
    res.x = x + b.x;
    res.y = y + b.y;
    return res;
}
