#include <iostream>
#include "chaine.h"

int main()
{
    chaine c1("Mouad");
    chaine c2("Khchich");
    chaine c3(c1);
    c1.affiche();
    return 0;
}