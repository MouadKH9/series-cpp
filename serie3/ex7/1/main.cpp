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
    int i = 0;
    while (!l.fini())
    {
        tmp = (int *)l.prochain();
        cout << "Hmmm\n";
        if (tmp)
            cout << *tmp << " " << i++ << "\n";
    }
    return 0;
}