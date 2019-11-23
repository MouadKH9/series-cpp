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
    this->taille = sizeof(c) / sizeof(char *);
    this->data = new char[this->taille];
    for (int i = 0; i < this->taille; i++)
    {
        this->data[i] = c[i];
    }
}
chaine::chaine(chaine &c)
{
    this->taille = c.taille;
    this->data = new char[this->taille];
    for (int i = 0; i < this->taille; i++)
    {
        this->data[i] = c.data[i];
    }
}

void chaine::affiche()
{
    cout << data << endl;
}

chaine::~chaine()
{
    delete[] data;
}