#include <iostream>
using namespace std;
template <class T>
T somme(T *tab, int n)
{
    T som;
    int i;
    som = 0;
    for (i = 0; i < n; i++)
        som = som + tab[i];
    return som;
}
int main()
{
    int t[] = {1, 2, 3, 4};

    cout << "somme des tableau d'entier : " << somme(t, 4) << "\n";
    float tfloat[] = {1.1, 2.2, 3.3};

    cout << "somme des tableau de real : " << somme(tfloat, 3) << "\n";

    return 0;
}
