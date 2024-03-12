# Parcial2-EAS02
Esta es la actividad sumativa #2 del Parcial 2. Trabaja de manera individual. Asegúrate que tu código compile en todo momento y guarda cambios constantemente.

##Instrucciones
- Haz un fork de este repositorio a tu cuenta de GitHub con correo institucional.
- Clona el repositorio a tu computadora.
- Tomar el código base que se muestra a continuación y resolverlo.

Extra:
- Separar el archivo en los correspondientes archivos .h y .cpp

```
#include <iostream>
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

    Square s(5);
    cout << s.getArea() << endl; // 25
    Rectangle r(5,5);
    cout << r.getArea() << endl; // 25
    Triangle t(5, 10);
    cout << t.getArea() << endl; // 25
    return 0;
}
```
Notas
Puedes hacer uso de tus trabajos pasados así como de la documentación de C++