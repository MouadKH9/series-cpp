#include <iostream>
class vecteur3d
{
    float x, y, z;

public:
    vecteur3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0)
    {
        x = c1;
        y = c2;
        z = c3;
    }
    friend int operator==(vecteur3d &, vecteur3d &);
    friend int operator!=(vecteur3d &, vecteur3d &);
};
int operator==(vecteur3d &v, vecteur3d &w)
{
    if ((v.x == w.x) && (v.y == w.y) && (v.z == w.z))
        return 1;
    else
        return 0;
}
int operator!=(vecteur3d &v, vecteur3d &w)
{
    if ((v.x != w.x) || (v.y != w.y) || (v.z != w.z))
        return 1;
    else
        return 0;
}

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