#include <iostream>
using namespace std;

template <class T, class U>
T fct(T a, U b, T c)
{
    cout << a << "\n"
         << b << "\n"
         << c << "\n";
}

int main()
{

    int n = 1, p = 1, q = 1;
    float x = 1.1;
    char t[20];
    char c;
    //fct(n, p, q); // correcte
    //fct(n, x, q); // correcte
    //fct (x, n, q) ; // incorrect
    //fct(t, n, &c); //correct
    return 0;
}