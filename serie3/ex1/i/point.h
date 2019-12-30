#include <iostream>
using namespace std;
class point{
    float x, y ;

    public :
    void initialise (float abs=0.0, float ord=0.0){
        x = abs ; y = ord ;
    }
    void affiche (){
        cout << "Point de coordonnées : " << x << " " << y << "\n" ;
    }
    float abs () {
        return x ;
    }
    float ord () {
        return y;
    }
};