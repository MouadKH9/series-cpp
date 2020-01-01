#include <iostream>
using namespace std;
class point
{
protected: // pour que x et y soient accessibles à pointcol
    int x, y;

public:
    point(int abs = 0, int ord = 0)
    {
        x = abs;
        y = ord;
    }
    virtual void affiche()
    {
        cout << "Je suis un point \n";
        cout << " mes coordonnées sont : " << x << " " << y << "\n";
    }
};
class pointcol : public point
{
    short couleur;

public:
    pointcol(int abs = 0, int ord = 0, short cl = 1) : point(abs, ord)
    {
        couleur = cl;
    }
    void affiche()
    {
        cout << "Je suis un point coloré \n";
        cout << " mes coordonnées sont : " << x << " " << y;
        cout << " et ma couleur est : " << couleur << "\n";
    }
};
int main()
{
    point p(3, 5);
    point *adp = &p;
    pointcol pc(8, 6, 2);
    pointcol *adpc = &pc;
    adp->affiche();
    adpc->affiche(); // instructions 1
    cout << "-----------------\n";
    adp = adpc;
    adp->affiche();
    adpc->affiche(); // instructions 2
}