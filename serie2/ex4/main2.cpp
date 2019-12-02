#include "iostream"
using namespace std;
class vect; // on doit declarer la class pour l'utiliser dans la class matrice
class matrice
{
    double mat[3][3];

public:
    matrice(double t[3][3]) // constructeur
    {
        int i, j;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                mat[i][j] = t[i][j];
    }
    void affiche() // l"affichage des valeurs
    {
        int i, j;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                cout << mat[i][j] << "\t";
        cout << "\n";
    };
    vect prod(vect); // focntion membre de class matrice
};

class vect
{
    double v[3]; //vecteur a 3 composantes
public:
    vect(double v1 = 0, double v2 = 0, double v3 = 0) //constructeur
    {
        v[0] = v1;
        v[1] = v2;
        v[2] = v3;
    }

    void afficher() //l'affichage des valeurs
    {
        int i;
        for (i = 0; i < 3; i++)
            cout << v[i] << " ";
    }
    friend vect matrice::prod(vect); //focntion amie de l'autre class
};

vect matrice::prod(vect x) // la definition de fonction prod
{
    int i, j;
    double som;
    vect res;
    for (i = 0; i < 3; i++)
    {
        for (j = 0, som = 0; j < 3; j++)
            som += mat[i][j] * x.v[j];
        res.v[i] = som;
    }
    return res;
}
// le programme de test
main()
{
    vect m(1, 1, 1);
    vect res;
    double tab[3][3] = {2, 1, 2, 2, 2, 2, 2, 2, 2};
    matrice mat(tab);
    res = mat.prod(m);
    res.afficher();
}
