#include <iostream>
#include "vect.h"

using namespace std;
class vectC : public vect
{
public:
    vectC(int n) : vect(n)
    {
    }
    vectC(vect v) : vect(v.taille())
    {
        for (int i = 0; i < nelem; i++)
        {
            *(adr + i) = v[i];
        }
    }

    vectC &operator=(vectC &v)
    {
        nelem = v.taille();
        adr = new int[nelem];
        for (int i = 0; i < nelem; i++)
        {
            *(adr + i) = v[i];
        }
    }
};