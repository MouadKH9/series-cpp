#include "point.h"
#include <cmath>
class pointB:public point{
    public:

    float rho(){
        return sqrt(pow(abs(),2) + pow(ord(),2));
    }
};  