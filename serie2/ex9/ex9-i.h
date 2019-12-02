#include <iostream>
using namespace std;
class pile_entier
{
    int taille; // la taille de pile
    int *tab;   // le tableau pour le stockage de pile
    int index;  // nombre d'entiers actuellement empilés
public:
    pile_entier(int); // constructeur
    ~pile_entier();   // destructeur
    void operator<(int);
    void operator>(int &); // attention & indispensable ici
    int pleine();          // quand la pile est remplie
    int vide();            // quand la pile est vide
};