#ifndef rectangulo_h
#define rectangulo_h
#include "figura.h"
#include <string>
using namespace std;

class Rectangulo:public Figura
{

public:
    Rectangulo():Figura(){}
    Rectangulo(int b, int h): Figura(b,h)
    {
    }
    void setArea(float a): Figura (a)
    {
        a= b*h ;
    }
    float getArea():Figura(){}
};

#endif // cuadrado_h