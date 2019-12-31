#include <iostream>

using namespace std;

template <class T>
class vect
{
private:
    T *adr;
    int taille;

public:
    vect(int n)
    {
        taille = n;
        adr = new T[n];
    }
    ~vect()
    {
        delete[] adr;
    }
    T &operator[](int n)
    {
        if (n >= taille)
        {
            cout << "Débordement d’indice!\n";
            return *(adr);
        }
        return *(adr + n);
    }
};
