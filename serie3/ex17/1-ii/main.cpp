#include <iostream>
#include "point.h"

int main()
{
    pointcol<int, char> pc(1, 1, 'r');
    pc.affiche();
    return 0;
}