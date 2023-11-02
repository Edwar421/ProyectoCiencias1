#include <string>
using namespace std;

class Sucursal {
    private:
        string nombreSucursal;
        Ciudad ciudadSucursal;
        Ciudad barrioSucursal;
        Ciudad direccionSucursal;
        string gerenteSucursal;

    public:
    	
    	Sucursal() {} // Constructor vac�o
    	
        Sucursal(string nombreSucursal, string gerenteSucursal) {
            this->nombreSucursal = nombreSucursal;
            this->gerenteSucursal = gerenteSucursal;
        }

        // M�todos getter para acceder a los atributos
        string getNombreSucursal() { 
			return nombreSucursal; 
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

    void setNombreSucursal(const string &nombreSucursal) {
        Sucursal::nombreSucursal = nombreSucursal;
    }

    void setgerenteSucursal(const string &gerenteSucursal) {
        Sucursal::gerenteSucursal = gerenteSucursal;
    }
};
