#include "point.h"
#include <cmath>
class pointB:public point{
    public:

    float rho(){
        // Alors on peut les utiliser ici sans passer a les methodes publique.
        return sqrt(pow(x,2) + pow(y,2));
    }
};  