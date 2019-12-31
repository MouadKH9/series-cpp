#include <iostream>
#include "liste.h"
using namespace std;

int main()
{
    int *a, *b, *c;
    *a = 1;
    *b = 2;
    *c = 3;

    liste l;
    l.ajoute(a);
    l.ajoute(b);
    l.ajoute(c);

    int *tmp;
    while (!l.fini())
    {
        tmp = (int *)l.prochain();
        cout << *tmp << "\n";
    }

    return 0;
}