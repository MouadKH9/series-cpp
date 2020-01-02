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
    void affiche();
};
template <class T>
void point<T>::affiche()
{
    cout << "Coordonnees : " << x << " " << y << "\n";
    //cout << "Coordonnees : " << (int)x << " " << (int)y << "\n"; //question2
}

int main()
{
    point<char> p(60, 65);
    p.affiche();
}