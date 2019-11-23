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
    chaine &operator=(chaine &);
    chaine &operator+(chaine &);
    int operator==(chaine &);
    char &operator[](int);
};

#endif