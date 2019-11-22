#include <iostream>
using namespace std;
int main()
{
    int i = 0, n, som;
    som = 0;
    do
    {
        cout << "donner un entier: ";
        cin >> n;
        som += n;
        i++;
    } while (i < 4);
    cout << "Somme: " << som;
}