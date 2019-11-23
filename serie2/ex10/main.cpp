#include <iostream>
#include "chaine.h"
using namespace std;
int main()
{
    // Pour tester les constructeur
    chaine hello("Hello");
    chaine *tmp = new chaine("world");
    chaine world(*tmp);
    delete tmp;

    // Pour tester les operateurs
    chaine c1, c2, c3;
    c1 = c2 = hello;
    c3 = hello + world;
    c3.affiche();

    cout << "c1 == c2 : " << (c1 == c2) << endl;
    cout << "c1 == c3 : " << (c1 == c3) << endl;

    cout << "c1[0] : " << c1[0] << endl;
    cout << "c1[1] : " << c1[1] << endl;
    c1[1] = 'M';
    cout << "c1[1] apres c1[1]='M' : " << c1[1] << endl;

    return 0;
}