#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

#include "Ciudad.h"

#include "Sucursal.h"

#inlude "Pais.h"

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
    Pais paisNacimiento;
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
			string telefonoFijo, string email, string fechaNacimiento, Pais paisNacimiento, Ciudad ciudadNacimiento, Ciudad ciudadResidencia, Ciudad direccionResidencia, 
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
        this -> paisNacimiento = paisNacimiento;
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
    Pais getPaisNacimiento() {
        return paisNacimiento;
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
        Empleado::nombre = nombre;
    }

    void setApellido(string apellido) {
        Empleado::apellido = apellido;
    }

    void settipoIdentificacion(string tipoIdentificacion) {
        Empleado::tipoIdentificacion = tipoIdentificacion;
    }

    void setNumIdentificacion(string numIdentificacion) {
        Empleado::numIdentificacion = numIdentificacion;
    }

    void setSexo(char sexo) {
        Empleado::sexo = sexo;
    }

    void setTelefonoCelular(string telefonoCelular) {
        Empleado::telefonoCelular = telefonoCelular;
    }
    
    void setTelefonoFijo(string telefonoFijo) {
        Empleado::telefonoFijo = telefonofijo;
    }
    
    void setEmail(string email) {
        Empleado::email = email;
    }

    void setFechaNacimiento(string fechaNacimiento) {
        Empleado::fechaNacimiento = fechaNacimiento;
    }
    
    void setPaisNacimiento(Pais paisNacimiento) {
        Empleado::paisNacimiento = paisNacimiento;
    }

    void setCiudadNacimiento(Ciudad ciudadNacimiento) {
        Empleado::ciudadNacimiento = ciudadNacimiento;
    }

    void setCiudadResidencia(Ciudad ciudadResidencia) {
        Empleado::ciudadResidencia = ciudadResidencia;
    }
    
    void setDireccionResidencia(Ciudad direccionResidencia) {
        Empleado::direccionResidencia = direccionResidencia;
    }

    void setBarrioResidencia(Ciudad barrioResidencia) {
        Empleado::barrioResidencia = barrioResidencia;
    }
    void setSucursal(Sucursal sucursal) {
        Empleado::sucursal = sucursal;
    }
};

#endif
