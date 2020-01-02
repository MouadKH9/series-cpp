//ON N'EST PAS VRAIMENT BESION DE CELLA

#include <iostream>

using namespace std;

const int n = 3;
int p = 5;
// Classe I cas 1:
class essai
{
    int tab[10];

public:
    essai(int);
};

essai ::essai(int a)
{
    for (int i = 0; i < 10; i++)
    {
        tab[i] = a;
    }
}

// Classe I  cas 2:
// class essai
// {
//     int tab[n];

// public:
//     essai(int);
// };

// essai ::essai(int a)
// {
//     for (int i = 0; i < n; i++)
//     {
//         tab[i] = a;
//     }
// }

//Classe III :
// Declaration incorrecte car p n'est pas declaree comme constante