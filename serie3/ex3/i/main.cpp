#include <iostream>
#include "pointcol.h"

int main()
{

    pointcol a(1, 2, 3);
    pointcol b(1, 2, 3);
    point p(1, 2);
    if (a == b) // instruction 1
        cout << "a == b" << endl;

    if (a == p) // instruction 2
        cout << "a == p" << endl;

    if (p == a) // instruction 3
        cout << "p == a" << endl;

    if (a == 5) // instruction 4
        cout << "a == 5" << endl;

    if (5 == a) // instruction 5
        cout << "5 == a" << endl;

    return 0;
}