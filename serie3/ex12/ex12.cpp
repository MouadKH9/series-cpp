#include <iostream>
using namespace std;

template <class T, class U>
void fct(T a, U b)
{
    cout << "le patron 1";
} // patron I
template <class T, class U>
void fct(T *a, U b)
{
    cout << "le patron 2";
} // patron II
template <class T>
void fct(T, T, T)
{
    cout << "le patron 3";
} // patron III
void fct(int a, float b)
{
    cout << "fonction 4";
} // fonction IV
int main()
{
    int n, p, q;
    float x, y;
    double z;
    //fct(n, p); // l'apple de patron 1
    //fct(x, y); // l'apple de patron 1
    //fct(n, x); // l'apple de fonction 4
    //fct(n, z); //l'apple de patron 1
    //fct(&n, p); // l'apple de patron 2
    //fct(&n, x); // l'apple de patron 2
    //fct(&n, &p, &q); // apple de patron 3
    return 0;
}