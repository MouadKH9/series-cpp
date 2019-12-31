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

template <class T, class T2>
class pointcol : public point<T>
{
    T2 col; // Col
public:
    pointcol(T abs, T ord, T2 col) : point<T>(abs, ord)
    {
        this->col = col;
    }
    void affiche()
    {
        point<T>::affiche();
        cout << "Couleur : " << col << "\n";
    }
};