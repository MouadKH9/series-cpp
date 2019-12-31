#include <iostream>
using namespace std;

template <class T>
class point
{
    T x, y; // coordonnees
public:
    point(T abs, T ord)
    {
        x = abs;
        y = ord;
    }
    void affiche()
    {
        cout << "Coordonnees : " << x << " " << y << "\n";
    }
};

template <>
class point<char>
{
public:
    void affiche()
    {
        cout << "Cas speciale du char!\n";
        cout << "Coordonnees : " << x << " " << y << "\n";
    }
};