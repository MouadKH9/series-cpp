#include <iostream>
#include "vectB.h"

using namespace std;
int main()
{

    vectB vb(5, 100);

    for (int i = 100; i < 105; i++)
        vb[i] = i + 1;

    for (int i = 100; i < 105; i++)
        cout << vb[i] << "\n";
    return 0;
}