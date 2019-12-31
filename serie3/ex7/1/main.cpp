#include <iostream>
#include "liste.h"
using namespace std;

int main()
{
    int *a = new int, *b = new int, *c = new int;
    *a = 1;
    *b = 2;
    *c = 3;

    liste l;
    l.ajoute(a);
    l.ajoute(b);
    l.ajoute(c);

    int *tmp;
    l.premier();
    while (!l.fini())
    {
        tmp = (int *)l.prochain();
        cout << *tmp << "\n"
             << l.fini() << "\n";
    }
    return 0;
}