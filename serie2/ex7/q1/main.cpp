#include <iostream>
#include "point.h"

using namespace std;
int main()
{
    point p1(3, 4);
    point *p2 = new point(2, 2);
    point *p3 = new point(3, 4);
    cout << "p1 == p2 : " << (p1 == *p2) << endl;
    cout << "p1 == p3 : " << (p1 == *p3) << endl;
    return 0;
}