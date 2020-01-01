#include <iostream>
using namespace std;
template <class T>
T carre(T c)
{
    return c * c;
}
int main()
{
    int i = 7;
    cout << "carre de " << i << " = " << carre(i) << "\n";
    float f = 3.2;
    cout << "carre de " << f << " = " << carre(f) << "\n";
    double d = 10.10;
    cout << "carre de " << d << " = " << carre(d) << "\n";
    return 0;
}