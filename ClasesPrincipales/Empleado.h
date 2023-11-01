#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

#include "Ciudad.h"

#include "Partido.h"

using namespace std;

class Empleado {
private: string nombre;
    string apellido;
    string puesto; //puesto al que aspira
    string numIdentificacion;
    char sexo;
    string estadoCivil;
    string fechaNacimiento;
    Ciudad ciudadNacimiento;
    Ciudad ciudadResidencia;
    Partido partido;
    int votos;

public: Empleado() {
        nombre = "";
        apellido = "";
        tipoIdentificacion = 'T';
        numIdentificacion = "";
        sexo = 'N';
        telefonoCelular = 0;
        telefonoFijo = 0;
        email = "";
        fechaNacimiento = "";
        ciudadNacimiento = "";
        paisNacimiento = "";
        ciudadResidencia = "";
        direccion = "";
        barrio = "";
        actividadLaboral = 'A';
        hijos = 'H';
        cantidadHijos = 0;
        votos = 0;
    }

    Empleado(string nombre, string apellido, string puesto, string numIdentificacion,
              char sexo, string estadoCivil, string fechaNacimiento,
              Ciudad ciudadNacimiento, Ciudad ciudadResidencia, Partido partido, int votos) {
        this -> nombre = nombre;
        this -> apellido = apellido;
        this -> puesto = puesto;
        this -> numIdentificacion = numIdentificacion;
        this -> sexo = sexo;
        this -> estadoCivil = estadoCivil;
        this -> fechaNacimiento = fechaNacimiento;
        this -> ciudadNacimiento = ciudadNacimiento;
        this -> ciudadResidencia = ciudadResidencia;
        this -> partido = partido;
        this -> votos = votos;
    }

    // M�todos getter para acceder a los atributos
    string getNombre() {
        return nombre;
    }
    string getApellido() {
        return apellido;
    }
    string getNombreCompleto() {
        return nombre + " " + apellido;
    }
    string getPuesto() {
        return puesto;
    }
    string getNumIdentificacion() {
        return numIdentificacion;
    }
    char getSexo() {
        return sexo;
    }
    string getEstadoCivil() {
        return estadoCivil;
    }
    string getFechaNacimiento() {
        return fechaNacimiento;
    }
    Ciudad getCiudadNacimiento() {
        return ciudadNacimiento;
    }
    Ciudad getCiudadResidencia() {
        return ciudadResidencia;
    }
    Partido getPartido() {
        return partido;
    }
    int getVotos() {
        return votos;
    }

    //setters

    void setNombre(const string & nombre) {
        Candidato::nombre = nombre;
    }

    void setApellido(const string & apellido) {
        Candidato::apellido = apellido;
    }

    void setPuesto(const string & puesto) {
        Candidato::puesto = puesto;
    }

    void setNumIdentificacion(const string & numIdentificacion) {
        Candidato::numIdentificacion = numIdentificacion;
    }

    void setSexo(char sexo) {
        Candidato::sexo = sexo;
    }

    void setEstadoCivil(const string & estadoCivil) {
        Candidato::estadoCivil = estadoCivil;
    }

    void setFechaNacimiento(const string & fechaNacimiento) {
        Candidato::fechaNacimiento = fechaNacimiento;
    }

    void setCiudadNacimiento(const Ciudad & ciudadNacimiento) {
        Candidato::ciudadNacimiento = ciudadNacimiento;
    }

    void setCiudadResidencia(const Ciudad & ciudadResidencia) {
        Candidato::ciudadResidencia = ciudadResidencia;
    }

    void setPartido(const Partido & partido) {
        Candidato::partido = partido;
    }

    void setVotos(int votos) {
        Candidato::votos = votos;
    }
};

#endif
