#include <iostream>

using namespace std;

template <class T, class U>
class pointcol
{
    T x, y;
    U col;

public:
    pointcol(T, T, U);

    void affiche();
};

template <class T, class U>
pointcol<T, U>::pointcol(T a, T b, U c)
{
    x = a;
    y = b;
    col = c;
}
template <class T, class U>
void pointcol<T, U>::affiche()
{
    cout << "les cordonne sont : " << x << " " << y << " la couleur : " << col << endl;
}
int main()
{
    pointcol<int, int> p1(10, 20, 30);
    p1.affiche();

    pointcol<int, float> p2(5, 6, 7.7);
    p2.affiche();
}