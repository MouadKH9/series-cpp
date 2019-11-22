#include <iostream>
#include "pile_entier.h"
using namespace std;
int main()
{
    pile_entier pile1(10);
    for (int i = 0; i < 10; i++)
    {
        pile1.empile(i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << pile1.depile() << endl;
    }
    cout << "====================" << endl;
    pile_entier *pile2 = new pile_entier();
    for (int i = 0; i < 20; i++)
    {
        pile2->empile(i + 1);
    }

    for (int i = 0; i < 20; i++)
    {
        cout << pile2->depile() << endl;
    }

    return 0;
}