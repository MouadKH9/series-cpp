#include <iostream>
#include "point.h"

using namespace std;
int main()
{
    point p1(3, 4);
    affiche(p1);
    point *p2 = new point(2, 2);
    affiche(*p2);
    return 0;
}