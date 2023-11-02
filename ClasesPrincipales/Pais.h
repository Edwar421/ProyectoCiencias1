#ifndef PAIS_H
#define PAIS_H

#include <string>
using namespace std;

class Pais {
private:
    string nombre;

public:
    Pais(string nombre) : nombre(nombre) {}

    string getNombre() {
        return nombre;
    }

    void setNombre(string nombre) {
        Pais::nombre = nombre;
    }
};


#endif

