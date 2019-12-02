#include <iostream>
#include "ex8-i.h"
using namespace std;
int vecteur3d::operator==(vecteur3d v) // definition de fonction de l'operateur ==
{
    if ((v.x == x) && (v.y == y) && (v.z == z))
        return 1;
    else
        return 0;
}
int vecteur3d::operator!=(vecteur3d v) // definition de fonction de l'operateur !=
{
    if ((v.x != x) || (v.y != y) || (v.z != z))
        return 1;
    else
        return 0;
}

// la fonction main pour le test
int main()
{
    vecteur3d v1(3, 4, 5), v2(4, 5, 6), v3(3, 4, 5);
    cout << " si les deux vecteur v1==v2 la resultat est 1 sinon 0  "
         << " la resultat est : " << (v1 == v2)
         << " si les deux vecteur v1!=v2 la resultat est 1 sinon 0  "
         << "la resultat est :" << (v1 != v2) << "\n";
    cout << " si les deux vecteur v1==v2 la resultat est 1 sinon 0  "
         << "la resultat est :" << (v1 == v3)
         << " si les deux vecteur v1!=v3 la resultat est 1 sinon 0  "
         << "la resultat est :" << (v1 != v3) << "\n";
    cout << " si les deux vecteur v2==v3 la resultat est 1 sinon 0  "
         << "la resultat est :" << (v2 == v3)
         << " si les deux vecteur v2!=v3 la resultat est 1 sinon 0  "
         << "la resultat est :" << (v2 != v3) << "\n";
    return 0;
}