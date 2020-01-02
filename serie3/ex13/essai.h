#include <iostream>

using namespace std;

template <class T, int n>
class essai
{
    T tab[n];

public:
    essai(T);
};

template <class T, int n>
essai<T, n>::essai(T a)
{
    for (int i = 0; i < n; i++)
    {
        tab[i] = a;
    }
}