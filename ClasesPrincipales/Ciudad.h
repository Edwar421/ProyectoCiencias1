#ifndef CIUDAD_H
#define CIUDAD_H

#include <string>
using namespace std;

class Ciudad {
private:
    string nombreCiudad;
    string nombreBarrio;
    string direccion;
    Pais pais;

public:
    Ciudad() {
        nombreCiudad = "";
        nombreBarrio = "";
        direccion = "";
    }

    Ciudad(string nombreCiudad, string nombreBarrio, string direccion, Pais pais) {
        this->nombreCiudad = nombreCiudad;
        this->nombreBarrio = nombreBarrio;
        this->direccion = direccion;
        this->pais = pais;
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
    
    Pais getPais() {
        return pais;
    }

    // Setters
    void setNombreCiudad(string nombreCiudad) {
        Ciudad::nombreCiudad = nombreCiudad;
    }

    void setNombreBarrio(string nombreBarrio) {
        Ciudad::nombreBarrio = nombreBarrio;
    }

    void setDireccion(string direccion) {
        Ciudad::direccion = direccion;
    }
    
    void setPais(Pais pais) {
        Ciudad::pais = pais;
    }
};

#endif

