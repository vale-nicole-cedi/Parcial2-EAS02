#ifndef cuadrado_h
#define cuadrado_h
#include "figura.h"
#include <string>
using namespace std;

class Cuadrado:public Figura
{

public:
    Cuadrado():Figura(){}
    Cuadrado(int b, int h): Figura(b,h){}
    void setArea(float a): Figura (a)
    {
        a=b*b;
    }
    float getArea():Figura(){}
};

#endif // cuadrado_h
