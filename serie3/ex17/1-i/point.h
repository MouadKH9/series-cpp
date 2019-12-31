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

template <class T>
class pointcol : public point<T>
{
    T col; // Col
public:
    pointcol(T abs, T ord, T col) : point<T>(abs, ord)
    {
        this->col = col;
    }
    void affiche()
    {
        point<T>::affiche();
        cout << "Couleur : " << col << "\n";
    }
};