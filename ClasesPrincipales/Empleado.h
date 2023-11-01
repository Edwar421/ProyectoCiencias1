#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

#include "Ciudad.h"

#include "Sucursal.h"

using namespace std;

class Empleado {
private: 
	string nombre;
    string apellido;
    string tipoIdentificacion;
    string numIdentificacion;
    char sexo;
    string telefonoCelular;
    string telefonoFijo;
    string email;
    string fechaNacimiento;
    Ciudad ciudadNacimiento;
    Ciudad ciudadResidencia;
    Ciudad direccionResidencia;
    Ciudad barrioResidencia;
    Sucursal sucursal;
    

public: Empleado() {
        nombre = "";
        apellido = "";
        tipoIdentificacion = "";
        numIdentificacion = "";
        sexo = 'N';
        telefonoCelular = "";
        telefonoFijo = "";
        email = "";
        fechaNacimiento = "";
        actividadLaboral = 'A';
        hijos = 'H';
    }

    Empleado(string nombre, string apellido, string tipoIdentificacion, string numIdentificacion, char sexo, string telefonoCelular,
			string telefonoFijo, string email, string fechaNacimiento, Ciudad ciudadNacimiento, Ciudad ciudadResidencia, Ciudad direccionResidencia, 
			Ciudad barrioResidencia, Sucursal sucursal) {
        this -> nombre = nombre;
        this -> apellido = apellido;
        this -> tipoIdentificacion = tipoIdentificacion;
        this -> numIdentificacion = numIdentificacion;
        this -> sexo = sexo;
        this -> telefonoCelular = telefonoCelular;
        this -> telefonoFijo = telefonoFijo;
        this -> email = email;
        this -> fechaNacimiento = fechaNacimiento;
        this -> ciudadNacimiento = ciudadNacimiento;
        this -> ciudadResidencia = ciudadResidencia;
        this -> direccionResidencia = direccionResidencia;
        this -> barrioResidencia = barrioResidencia;
        this -> sucursal = sucursal;
        
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
    string gettipoIdentificacion() {
        return tipoIdentificacion;
    }
    string getNumIdentificacion() {
        return numIdentificacion;
    }
    char getSexo() {
        return sexo;
    }
    string getTelefonoCelular() {
        return telefonoCelular;
    }
    string getTelefonoFijo() {
        return telefonoFijo;
    }
    string getEmail() {
        return email;
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
    Ciudad getDireccionResidencia() {
        return direccionResidencia;
    }
    Ciudad getBarrioResidencia() {
        return barrioResidencia;
    }
    Sucursal getSucursal(){
    	return sucursal;
	}
    

    //setters
    void setNombre(string nombre) {
        Candidato::nombre = nombre;
    }

    void setApellido(string apellido) {
        Candidato::apellido = apellido;
    }

    void settipoIdentificacion(string tipoIdentificacion) {
        Candidato::tipoIdentificacion = tipoIdentificacion;
    }

    void setNumIdentificacion(string numIdentificacion) {
        Candidato::numIdentificacion = numIdentificacion;
    }

    void setSexo(char sexo) {
        Candidato::sexo = sexo;
    }

    void setTelefonoCelular(string telefonoCelular) {
        Candidato::telefonoCelular = telefonoCelular;
    }
    
    void setTelefonoFijo(string telefonoFijo) {
        Candidato::telefonoFijo = telefonofijo;
    }
    
    void setEmail(string email) {
        Candidato::email = email;
    }

    void setFechaNacimiento(string fechaNacimiento) {
        Candidato::fechaNacimiento = fechaNacimiento;
    }

    void setCiudadNacimiento(Ciudad ciudadNacimiento) {
        Candidato::ciudadNacimiento = ciudadNacimiento;
    }

    void setCiudadResidencia(Ciudad ciudadResidencia) {
        Candidato::ciudadResidencia = ciudadResidencia;
    }
    
    void setDireccionResidencia(Ciudad direccionResidencia) {
        Candidato::direccionResidencia = direccionResidencia;
    }

    void setBarrioResidencia(Ciudad barrioResidencia) {
        Candidato::barrioResidencia = barrioResidencia;
    }
    void setSucursal(Sucursal sucursal) {
        Candidato::sucursal = sucursal;
    }

};

#endif
