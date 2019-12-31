#include <iostream>

using namespace std;

template <class T1, class T2>
class vect
{
private:
    T1 *adr;
    T2 taille;

public:
    vect(T2 n)
    {
        taille = n;
        adr = new T1[n];
    }
    ~vect()
    {
        delete[] adr;
    }
    T1 &operator[](int n)
    {
        if (n >= taille)
        {
            cout << "Débordement d’indice!\n";
            return *(adr);
        }
        return *(adr + n);
    }
};
