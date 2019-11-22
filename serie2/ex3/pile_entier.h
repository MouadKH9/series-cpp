#ifndef PILE_ENTIER
#define PILE_ENTIER
class pile_entier
{
    int *tab;
    int index;
    int taille;

public:
    pile_entier(int);
    pile_entier();
    ~pile_entier();
    void empile(int);
    int depile();
    int pleine();
    int vide();
};
#endif