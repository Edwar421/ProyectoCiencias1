#ifndef SUCURSAL_H
#define SUCURSAL_H

#inclide "Ciudad.h"

#include <string>
using namespace std;

class Sucursal {
    private:
        string nombreSucursal;
        Ciudad ciudadSucursal;
        string barrioSucursal;
        string direccionSucursal;
        string gerenteSucursal;

    public:
    	
    	Sucursal() {} // Constructor vac�o
    	
        Sucursal(string nombreSucursal, Ciudad ciudadSucursal, string barrioSucursal, string direccionSucursal, string gerenteSucursal) {
            this->nombreSucursal = nombreSucursal;
            this->ciudadSucursal = ciudadSucursal;
            this->barrioSucursal = barrioSucursal;
            this->direccionSucursal = direccionSucursal;
            this->gerenteSucursal = gerenteSucursal;
        }

        // M�todos getter para acceder a los atributos
        string getNombreSucursal() { 
			return nombreSucursal; 
		}
		
		Ciudad getCiudadSucursal() {
	        return ciudadSucursal;
	    }
	    
	    string getBarrioSucursal() {
	        return barrioSucursal;
	    }
	    
	    string getDireccionSucursal() {
	        return direccionSucursal;
	    }
		
        string getGerenteSucursal() { 
			return gerenteSucursal; 
		}
        
        // M�todo toString para la clase Partido
	    string toString() {
	        string datos;
	        datos = getnombreSucursal()+ "," + getgerenteSucursal();
	        return datos;
	    }

    
    void setNombreSucursal(string nombreSucursal) {
        Sucursal::nombreSucursal = nombreSucursal;
    }
    
    void setCiudadSucursal(Ciudad ciudadSucursal) {
        Sucursal::ciudadSucursal = ciudadSucursal;
    }
    
    void setBarrioSucursal(string barrioSucursal) {
        Sucursal::barrioSucursal = barrioSucursal;
    }
    
    void setDireccionSucursal(string direccionSucursal) {
        Sucursal::direccionSucursal = direccionSucursal;
    }

    void setgerenteSucursal(string gerenteSucursal) {
        Sucursal::gerenteSucursal = gerenteSucursal;
    }
};

#endif
