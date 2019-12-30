#include <iostream>

using namespace std;
class vect{
    protected:
    int nelem ; // nombre d'éléments
    int * adr ; // adresse zone dynamique contenant les éléments
    public :
    vect (int n){
        nelem = n;
        adr = new int[n];
    }
    ~vect (){
        delete[] adr;
    }
    int & operator [] (int i){
        return *(adr + i);
    }
 };