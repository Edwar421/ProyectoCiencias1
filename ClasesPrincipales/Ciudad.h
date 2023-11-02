#ifndef CIUDAD_H
#define CIUDAD_H

#include <string>
using namespace std;

class Ciudad {
private:
    string nombreCiudad;
    string nombreBarrio;
    string direccion;

public:
    Ciudad() {
        nombreCiudad = "";
        nombreBarrio = "";
        direccion = "";
    }

    Ciudad(string nombreCiudad, string nombreBarrio, string direccion) {
        this->nombreCiudad = nombreCiudad;
        this->nombreBarrio = nombreBarrio;
        this->direccion = direccion;
    }

    // Getters
    string getNombreCiudad() {
        return nombreCiudad;
    }

    string getNombreBarrio() {
        return nombreBarrio;
    }

    string getDireccion() {
        return direccion;
    }

    // Setters
    void setNombreCiudad(string nombreCiudad) {
        this->nombreCiudad = nombreCiudad;
    }

    void setNombreBarrio(string nombreBarrio) {
        this->nombreBarrio = nombreBarrio;
    }

    void setDireccion(string direccion) {
        this->direccion = direccion;
    }
};

#endif

