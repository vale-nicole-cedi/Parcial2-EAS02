#ifndef figura_h
#define figura_h
#include <bits/stdc++.h>
using namespace std;

class Figura{
private:
    int b, h;
    float a;

public:
    Figura();
    Figura(int b, int h);
    void setArea(float a);
    float getArea();
};


class Cuadrado:public Figura
{

public:
    Cuadrado():Figura(){}
    Cuadrado(int b): Figura(b,b)
    {
         float area = b*b;
         setArea(area);
    }
   
};


class Triangulo:public Figura
{

public:
    Triangulo():Figura(){}
    Triangulo(int b, int h): Figura(b,h)
    {
        float area = (b*h)/2;
         setArea(area);
    }
    
};

class Rectangulo:public Figura
{

public:
    Rectangulo():Figura(){}
    Rectangulo(int b, int h): Figura(b,h)
    {
        float area = b*h;
         setArea(area);
    }
    
};


#endif // figura_h

