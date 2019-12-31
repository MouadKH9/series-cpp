#include <iostream>

using namespace std;

struct element // structure d'un élément de liste
{
    element *suivant; // pointeur sur l'élément suivant
    void *contenu;    // pointeur sur un objet quelconque
};
class liste
{
    element *debut; // pointeur sur premier élément
    element *index; // autres membres données éventuels
public:
    liste()
    {
    }
    ~liste()
    {
    }
    void ajoute(void *contenu)
    {
        element *el = new element;
        el->contenu = contenu;
        if (debut != NULL)
            el->suivant = debut;
        debut = el;
    }
    void *premier()
    {
        index = debut;
        return debut->contenu;
    }
    void *prochain()
    {
        void *tmp = index->contenu;
        index = index->suivant;
        return tmp;
    }
    int fini()
    {
        // TODO: this doesnt work perfectly.
        return index->contenu == nullptr;
    }
};