#include <iostream>
#include "vect.h"

using namespace std;
class vectC:public vect{
    int debut; // Marque le debut des indices
    public :
    vectB (int n,int d): vect(n){
        debut = d;
    }
    int & operator [] (int i){
        return *(adr + i - debut);
    }
 };