#ifndef CHAINE
#define CHAINE

class chaine
{
private:
    char *data;
    int taille;

public:
    chaine();
    chaine(char *);
    chaine(chaine &);
    void affiche();
    ~chaine();
};

#endif