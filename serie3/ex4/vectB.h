#include <iostream>
#include "vect.h"

using namespace std;
class vectB:public vect{
    int nelem ; // nombre d'éléments
    int debut; // Marque le debut des indices
    int * adr ; // adresse zone dynamique contenant les éléments
    public :
    vectB (int n,int d): vect(n){
        debut = d;
    }
    int & operator [] (int i){
        cout <<"OP "<< i <<" " << debut <<"\n";
        return *(adr + i - debut);
    }
 };