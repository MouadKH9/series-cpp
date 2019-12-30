#include <iostream>
#include "vectC.h"

using namespace std;
int main()
{

    vectC vc(5);
    // On remplie le premier vecteur:
    for (int i = 100; i < 105; i++)
        vc[i] = i + 1;
    // On recopie vc en vc2
    vectC vc2(vc);

    // On affiche vc2
    cout << "Par recopie: \n";
    for (int i = 100; i < 105; i++)
        cout << vc2[i] << "\n";

    // On recopie vc en vc3
    vectC vc3 = vc;

    // On affiche vc2
    cout << "Par affectation: \n";
    for (int i = 100; i < 105; i++)
        cout << vc3[i] << "\n";
    return 0;
}