/*# Parcial2-EAS02
Esta es la actividad sumativa #2 del Parcial 2. Trabaja de manera individual. Asegúrate que tu código compile en todo momento y guarda cambios constantemente.

##Instrucciones
- Haz un fork de este repositorio a tu cuenta de GitHub con correo institucional.
- Clona el repositorio a tu computadora.
- Tomar el código base que se muestra a continuación y resolverlo.

Extra:
- Separar el archivo en los correspondientes archivos .h y .cpp*/

#include <bits/stdc++.h>
#include <iostream>
#include "figura.h"
using namespace std;


/*
    Implementa los constructores y funciones de la clase Figura.
    El área NO se debe de asignar en el constructor de Figura, ÚNICAMENTE en el constructor individual de cada figura.
*/

/*
    Implementa la clase Cuadrado que hereda de Figura.
    Crear constructor de Cuadrado que herede del constructor de Figura.
    Asignar el área del cuadrado.
*/

/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Asignar el área del Rectángulo.
*/

/*
    Implementa la clase Triángulo que hereda de Figura.
    Crear constructor de Triángulo que herede del constructor de Figura.
    Asignar el área del Triángulo.
*/

int main () {

    Cuadrado s(5);
    cout << s.getArea() << endl; // 25
    Rectangulo r(5,5);
    cout << r.getArea() << endl; // 25
    Triangulo t(5, 10);
    cout << t.getArea() << endl; // 25
    return 0;
}


Figura::Figura()
{
    this->b=0;
    this->h=0; 
}

Figura::Figura(int b, int h)
{
    this->b=b;
    this->h=h; 
  
}

void Figura::setArea(float a)
{
  this->a = a;
}

float Figura::getArea()
{
  return this->a;
}