#include <iostream>
#include "point.h"

int main()
{
    point<int> p(1, 1);
    p.affiche();
    point<char> p2('1', '2');
    p2.affiche();
    return 0;
}