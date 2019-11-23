#include "chaine.h"
#include <iostream>

using namespace std;

chaine::chaine()
{
    this->data = new char[0];
    this->taille = 0;
}
chaine::chaine(char *c)
{
    char *tmp = c;
    this->taille = 0;
    // Calcule du taille du chaine de char
    while (*tmp++)
        this->taille++;

    this->data = new char[this->taille];
    // Recopie du chaine du char
    for (int i = 0; i < this->taille; i++)
        this->data[i] = c[i];
}
chaine::chaine(chaine &c)
{
    this->taille = c.taille;
    this->data = new char[this->taille];
    for (int i = 0; i < this->taille; i++)
        this->data[i] = c.data[i];
}

void chaine::affiche()
{
    for (int i = 0; i < this->taille; i++)
        printf("%c", this->data[i]);
    printf("\n");
}

chaine::~chaine()
{
    delete[] data;
}

chaine &chaine::operator=(chaine &c)
{
    this->taille = c.taille;
    for (int i = 0; i < this->taille; i++)
        this->data[i] = c.data[i];

    return *this;
}
chaine &chaine::operator+(chaine &c)
{
    chaine *res;
    res = this;
    for (int i = 0; i < c.taille; i++)
        res->data[res->taille + i] = c.data[i];
    res->taille += c.taille;
    return *res;
}
int chaine::operator==(chaine &c)
{
    if (this->taille != c.taille)
        return 0;
    for (int i = 0; i < this->taille; i++)
        if (this->data[i] != c.data[i])
            return 0;
    return 1;
}
char &chaine::operator[](int i)
{
    return this->data[i];
}