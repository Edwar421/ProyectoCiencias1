#include <string>

class OpcionesListas {
private:

public:
    //1. Ciudades en las que hay registradas sucursales.
    void mostrarCiudades(Lista < Ciudad > * ciudades) {
        for (int i = 0; i < ciudades -> getTam(); i++) {
            //Guardar la ciudad buscada en una variable y devolver atributo nombre
            Ciudad ciudad = ciudades -> buscar(i);
            cout << i << ". " << ciudad.getNombreCiudad() << endl;
        }
    }

<<<<<<< HEAD
    //2. Sucursales.
    void mostrarSucursales(Lista < Sucursal > * sucursales) {
        for (int i = 0; i < sucursales -> getTam(); i++) {
            //Guardar la sucursal buscada y devolver el atributo nombre
            Sucursal sucursal = sucursales -> buscar(i);
            cout << i << "." << "Nombre :"  << sucursal.getNombre() << "\n Barrio: " << sucursal.getBarrioSucursal() << "\n Dirección: " << sucursal.getDireccionSucursal() << "\n Gerente: " << sucursal.getGerenteSucursal();
        }
    }
	//3. Empleados.
    void mostrarEmpleados(Lista < Empleado > * empleados) {
        for (int i = 0; i < empleados -> getTam(); i++) {
            //Guardar el empleado y devolver sus atributos
            Empleado empleado = empleados -> buscar(i);
            cout << i << ". " << empleado.getNombre() << " " << empleado.getApellido() << " " << empleado.getNumIdentificacion() << " " << empleado.getSexo() << " " << empleado.getTelefonoCelular() << empleado.getTelefonoFijo() << empleado.getEmail() << empleado.getFechaNacimiento() << empleado.getCiudadNacimiento() << empleado.getPaisNacimiento() << empleado.getCiudadResidencia() << empleado.getDireccionResidencia() << empleado.getBarrioResidencia() << empleado.getSucursal() << "/n" << endl;
=======
    //2. Partidos legalmente reconocidos.
    void mostrarSucursales(Lista < Sucursal > * sucursales) {
        for (int i = 0; i < partidos -> getTam(); i++) {
            //Guardar el partido buscado y devolver el atributo nombre y representante Legal
            Sucursal sucursal = sucursales -> buscar(i);
            cout << i << ". " << sucursal.getNombreSucursal() << " /--/ Gerente = " << partido.getGerenteSucursal() << endl;
        }
    }

    void mostrarEmpleados(Lista < Empleado > * empleados) {
        for (int i = 0; i < empleados -> getTam(); i++) {
            //Guardar el candidato y devolver sus atributos
            Empelado empleado = empleados -> buscar(i);
            cout << i << ". " << candidato.getNombre() << " " << candidato.getApellido() << " " << candidato.getTipoIdentificacion() << " " << candidato.NumIdentificacion() << " " << candidato.getSucursal().getNombreSucursal() << "/n" << endl;
<<<<<<< HEAD
>>>>>>> abcc5b659a4a6ccef4106c323e6536850b6de452
=======
>>>>>>> abcc5b659a4a6ccef4106c323e6536850b6de452
        }
        system("Pause");
    }

<<<<<<< HEAD
=======
    //3. Todos los candidatos al concejo de una ciudad.

    void candidatosConcejo(string ciudad, Lista < Empleado > * empleados) {
        int cantidad = 0;
        for (int i = 0; i < candidatos -> getTam(); i++) {
            //Guardar el candidato buscado y devolver los atributos necesarios dada la validacion
            Empleado empleado = empleados -> buscar(i);
            if (empleado.getCiudadResidencia().getNombre() == ciudad && empleado.getPuesto() == "Concejo") {
                cout << candidato.getNombre() << endl;
                cantidad++;
            }
        }

        if (cantidad == 0) {
            cout << "Esta ciudad no tiene candidatos para esta categoria, verifique el ingreso" << endl;
        }

        system("Pause"); // Pausa el programa y espera a que se presione una tecla
    }

    //4. Todos los candidatos a la alcaldï¿½a de una ciudad.

    void candidatosAlcaldia(string ciudad, Lista < Empleado > * empleados) {
        int cantidad = 0;
        for (int i = 0; i < empleados -> getTam(); i++) {
            //Guardar el candidato buscado y devolver los atributos necesarios dada la validacion
            Empleado empleado = empleados -> buscar(i);
            if (empleado.getCiudadResidencia().getNombreCiudad() == ciudad && empleado.getPuesto() == "Alcaldia") {
                cout << empleados -> buscar(i).getNombre() << endl;
                cantidad++;
            }
        }

        if (cantidad == 0) {
            cout << "Esta ciudad no tiene candidatos para esta categoria, verifique el ingreso" << endl;
        }

        system("Pause"); // Pausa el programa y espera a que se presione una tecla
    }

    //5. Candidatos a cada una de las alcaldï¿½as, por partido.
    //6. Candidatos a cada uno de los concejos, por partido.

    void candidatosAlcaldiaConsejoPartido(string puesto, Lista < Candidato > * candidatos, Lista<Partido>* partidos) {
        int cantidad = 0, Opcion;
        
        cout<<"Seleccione el partido"<<endl;
        //Se muestra la lista de los partidos existentes a seleccionar
        mostrarPartidos(partidos);
        Opcion = leerEntrada(0,partidos->getTam()-1);
        //Se guarda el nombre del partido en una variable local para no repetir el proceso de busqueda
        string nombrePartido = partidos->buscar(Opcion).getNombre();
        
        cout<<"Los siguiente candidatos se van a presentar al puesto "<<puesto<<" del partido politico "<<nombrePartido<<endl;
        for (int i = 0; i < candidatos -> getTam(); i++) {
            //Guardar el candidato buscado y devolver los atributos necesarios dada la validacion
            Candidato candidato = candidatos -> buscar(i);
            if (candidato.getPartido().getNombre() == nombrePartido && candidato.getPuesto() == puesto) {
                cout << candidato.getNombre() <<" "<<candidato.getNumIdentificacion()<<endl;
                cantidad++;
            }
        }

        if (cantidad == 0) {
            cout << "Este partido no tiene candidatos para esta categoria, verifique el ingreso" << endl;
        }

        system("Pause"); // Pausa el programa y espera a que se presione una tecla
    }

    //7. Por cada partido, la lista de candidatos a los consejos.
    //8. Por cada partido, la lista de candidatos a las alcaldï¿½as.
    void candidatosAlcaldiaConsejoPartidoLista(string cargo, Lista < Candidato > * candidatos, Lista < Partido > * partidos) {
        for (int j = 0; j < partidos->getTam(); j++) {
            cout << "Lista de nombres de candidatos del partido " + partidos -> buscar(j).getNombre() + " para el cargo " + cargo << endl;
            Partido partido = partidos -> buscar(j);
            for (int i = 0; i < candidatos->getTam(); i++) {
                //Guardar el candidato y devolver los atributos necesarios dada la validacion
                Candidato candidato = candidatos -> buscar(i);
                //Recorre el candidato y el partido
                if (candidato.getPartido().getNombre() == partido.getNombre() && candidato.getPuesto() == cargo) {
                    cout << candidatos -> buscar(i).getNombre() << endl;
                }
            }
        }
        system("Pause"); // Pausa el programa y espera a que se presione una tecla
    }

>>>>>>> abcc5b659a4a6ccef4106c323e6536850b6de452
};
