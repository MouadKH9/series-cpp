#include <iostream>
#include "pointB.h"
int main(){
    pointB p;
    p.initialise(1,1);
    p.affiche();
    cout << "rho: " << p.rho() << endl;
    return 0;
}