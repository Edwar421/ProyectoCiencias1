#include <stdlib.h>  //Libreria para limpiar pantalla
#include <iostream>
using namespace std;

#include "Clases Principales/Inicializar.cpp"

class Menu {
private:
    Lista<Ciudad> *ciudades;
    Lista<Sucursal> *sucursales;
    Lista<Empleado> *empleados;
    Inicializar inicializar;

public:
    int Opcion;

    void MostrarMenu();
    void SubMenuListas();
    void SubMenuConsultas();
    void SubMenuEstadisticas();
    void SubMenuInsercion();
    string elegirSucursal();
    string elegirCiudad();

    void Menu();

    void leerArchivos() {
        Archivos Ciudades("Ciudades");
        Archivos Sucursal("sucursales");
        Archivos Empleados("Empleados");

        ciudades = Ciudades.leerCiudades();
        sucursales = Sucursal.leerSucursales();
        empleados = Empleados.leerEmpleados();
    }
};

void Simulacion::Menu() {
    bool programa = true;

    leerArchivos();

    OpcionesConsultas opcionConsultas(ciudades, sucursales, empleados); // Inicializa el objeto de la clase Opciones Consultas
    OpcionesSimulacion opcionesSimulacion(ciudades, sucursales, empleados, totalElecciones);
    OpcionesEstadisticas opcionesEstadisticas(ciudades, sucursales, empleados, totalElecciones);

    while (programa) { // Bucle infinito del programa
        system("cls");
        MostrarMenu();
        Opcion = leerEntrada(1,6);

        switch (Opcion) {
            case 1: {
                system("cls"); // Limpia pantalla
                SubMenuListas(); // Muestra men�
                Opcion = leerEntrada(1,8);
                switch (Opcion) {
                    case 1: {
                        opcionLista.mostrarCiudades(ciudades);
                        system("Pause"); // Pausa el programa y espera a que se presione una tecla
                        break;
                    }
                    case 2: {
                        opcionLista.mostrarsucursales(sucursales);
                        system("Pause"); // Pausa el programa y espera a que se presione una tecla
                        break;
                    }
                    case 3: {
                        string ciudad;
                        cout << "Elige la ciudad que desees ver los empleados al concejo" << endl;
                    	opcionLista.mostrarCiudades(ciudades);
                    	Opcion = leerEntrada(0,ciudades->getTam()-1);
                        opcionLista.empleadosConcejo(ciudades->buscar(Opcion).getNombre(), empleados);

                        break;
                    }
                    case 4: {
                        string ciudad;
                        cout << "Elige la ciudad que desees ver los empleados a la alcaldia" << endl;
                    	opcionLista.mostrarCiudades(ciudades);
                        Opcion = leerEntrada(0,ciudades->getTam()-1);
                        opcionLista.empleadosAlcaldia(ciudades->buscar(Opcion).getNombre(), empleados);
                        break;
                    }
                    case 5: {
                        opcionLista.empleadosAlcaldiaConsejoPartido("Alcaldia", empleados, sucursales);
                        break;
                    }
                    case 6: {
                        opcionLista.empleadosAlcaldiaConsejoPartido("Concejo", empleados, sucursales);

                        break;
                    }
                    case 7: {
                        opcionLista.empleadosAlcaldiaConsejoPartidoLista("Concejo", empleados, sucursales);
                        break;
                    }
                    case 8: {
                        opcionLista.empleadosAlcaldiaConsejoPartidoLista("Alcaldia", empleados, sucursales);
                        break;
                    }
                }
                break;
            }
            case 2: {
                system("cls");
                SubMenuConsultas();
                Opcion = leerEntrada(1,7);
                switch (Opcion) {
                    case 1: {
                        string partido, ciudad;
                        partido = elegirPartido();
                        ciudad = elegirCiudad();
                        opcionConsultas.consulta1(partido, ciudad);
                        break;
                    }
                    case 2: {
                        string partido;
                        partido = elegirPartido();
                        opcionConsultas.consulta2(partido);
                        break;
                    }
                    case 3: {
                        string partido;
                        partido = elegirPartido();
                        opcionConsultas.consulta3(partido);
                        break;
                        break;
                    }
                    case 4: {
                        string ciudad;
                        ciudad = elegirCiudad();
                        opcionConsultas.consulta4(ciudad);
                        break;
                    }
                    case 5: {
                        string ciudad;
                        ciudad = elegirCiudad();
                        opcionConsultas.consulta5(ciudad);
                        break;
                    }
                    case 6: {
                        string ciudad;
                        ciudad = elegirCiudad();
                        opcionConsultas.consulta6(ciudad);
                        break;
                    }
                    case 7: {
                        opcionConsultas.consulta7( * ciudades);
                        break;
                    }
                }
                break;
            }
            case 3: {
                system("cls");
                SubMenuEstadisticas();
                Opcion = leerEntrada(1,3);
                switch (Opcion) {
                    case 1: {
                        opcionesEstadisticas.estadisticaPorCiudad();
                        system("pause");
                        break;
                    }
                    case 2: {
                        cout << "Ingrese el tipo de eleccion: 1.Alcaldia 2.Concejo" << endl;
                        Opcion = leerEntrada(1,2);
                        if (Opcion == 1) {
                            opcionesEstadisticas.estadisticaEleccion("Alcaldia");

                        } else if (Opcion == 2) {
                            opcionesEstadisticas.estadisticaEleccion("Concejo");

                        }
                        system("pause");

                        break;
                    }
                    case 3: {
                        cout << "Ingrese el tipo de eleccion: 1.Alcaldia 2.Concejo" << endl;
                        Opcion = leerEntrada(1,2);
                        if (Opcion == 1) {
                            opcionesEstadisticas.estadisticaNacional("Alcaldia");

                        } else if (Opcion == 2) {
                            opcionesEstadisticas.estadisticaNacional("Concejo");

                        }
                        system("pause");

                        break;
                    }
                }
                break;
            }
            case 4: {
                system("cls");
                // REALIZAR SIMULACION 1.
                //SIMULAR 2. TODOS LOS VOTOS DE LA SIMULACION SE REINICIAN
                opcionesSimulacion.simularVotos();
                break;
            }
            case 5: {
                system("cls");
                SubMenuInsercion();
                Opcion = leerEntrada(1,3);

                string caso;

                switch (Opcion) {
                    case 1: { //Opciones para insertar
                        EleccionSubMenuInsercion();
                        Opcion = leerEntrada(1,3);
                        switch (Opcion) {
                            case 1: {
                                //Creaci�n del Objeto partido
                                Partido NuevoPartido = inicializar.inicializarPartido(sucursales);
                                //Inserci�n en la lista de sucursales
                                sucursales -> insertar(NuevoPartido);

                                Opcion = 0;
                                break;
                            }
                            case 2: { // Insertar Empleado (Se necesita validaci�n de puesto, fecha nacimiento, estado civil)

                                //Creacion del objeto Empleado para a�adirlo en la lista
                                Empleado nuevoEmpleado = inicializar.inicializarEmpleado(sucursales, ciudades, empleados);
                                //Inserci�n en la lista de empleados
                                if(!(nuevoEmpleado.getNombre() == ""))
                                    empleados -> insertar(nuevoEmpleado);
                                break;
                            }
                            case 3: {
                                //Se ingresan los datos de la nueva ciudad (Se necesita validaci�n cuando la ciudad ya existe)
                                //Creaci�n del Objeto Ciudad
                                Ciudad NuevaCiudad = inicializar.inicializarCiudad();
                                //Insercion en la lista de ciudades
                                ciudades -> insertar(NuevaCiudad);
                                break;
                            }
                        }
                        break;
                    }
                    case 2: { //Opciones para Modificar
                        EleccionSubMenuInsercion();
                        Opcion = leerEntrada(1,3);
                        switch (Opcion) {
                            case 1: {
                                //Encontrar el partido a modificar
                                string NombrePartido, RepresentanteLegal;
                                cout << "�Que partido deseas modificar?" << endl;
                                opcionLista.mostrarsucursales(sucursales);
                                Opcion = leerEntrada(0,sucursales->getTam()-1);

                                string auxNombrePartido = sucursales->buscar(Opcion).getNombre();

                                //Inicializar Partido
                                Partido NuevoPartido = inicializar.inicializarPartido(sucursales);

                                sucursales -> modificar(NuevoPartido, Opcion);

                                for(int i = 0; i < empleados->getTam(); i++)
                                {
                                    Empleado auxEmpleado = empleados->buscar(i);
                                    if(auxEmpleado.getPartido().getNombre() == auxNombrePartido)
                                    {
                                        auxEmpleado.setPartido(NuevoPartido);
                                        empleados->modificar(auxEmpleado,i);
                                    }

                                }

                                break;
                            }
                            case 2: { //Modificar Empleado

                                // Encontrar el Empleado a modificar
                                int Opcion;

                                cout << "Selecciona el Empleado que deseas modificar" << endl;
                                opcionLista.mostrarempleados(empleados);
                                Opcion = leerEntrada(0,empleados->getTam()-1);

                                // Creaci�n del objeto Empleado para a�adirlo en la lista
                                Empleado nuevoEmpleado = inicializar.inicializarEmpleado(sucursales, ciudades, empleados);

                                // Inserci�n en la lista de empleados
                                empleados -> modificar(nuevoEmpleado, Opcion);
                                break;
                            }
                            case 3: { //Modificar Ciudad

                                //Enconntrar la ciudad a modificar (Se necesita validaci�n cuando la ciudad ya existe)
                                string nombre, departamento;
                                int tamConcejo, censoElectoral, ciudad;
                                cout << "Selecciona la ciudad que desea modificar" << endl;
                                opcionLista.mostrarCiudades(ciudades);
                                ciudad = leerEntrada(0,ciudades->getTam()-1);

                                string auxNombreCiudad = ciudades->buscar(ciudad).getNombre();

                                //Creaci�n del Objeto Ciudad
                                Ciudad NuevaCiudad = inicializar.inicializarCiudad();
                                //Insercion en la lista de ciudades
                                ciudades -> modificar(NuevaCiudad, ciudad);

                                for(int i = 0; i < empleados->getTam(); i++)
                                {
                                    Empleado auxEmpleado = empleados->buscar(i);
                                    if(auxEmpleado.getCiudadNacimiento().getNombre() == auxNombreCiudad)
                                    {
                                        auxEmpleado.setCiudadNacimiento(NuevaCiudad);
                                        empleados->modificar(auxEmpleado,i);
                                    }
                                    if(auxEmpleado.getCiudadResidencia().getNombre() == auxNombreCiudad)
                                    {
                                        auxEmpleado.setCiudadResidencia(NuevaCiudad);
                                        empleados->modificar(auxEmpleado,i);
                                    }

                                }
                                break;
                            }
                        }
                        break;
                    }
                    case 3: { //Opciones para Eliminar //Validaci�n, Si se eliminan partido, los empleados con ese partido quedan sin partido
                        EleccionSubMenuInsercion();
                        Opcion = leerEntrada(1,3);
                        switch (Opcion) {
                            case 1: { //Eliminar Partido
                                int Eleccion;
                                cout << "�Que partido deseas Eliminar?" << endl;
                                opcionLista.mostrarsucursales(sucursales);
                                Eleccion = leerEntrada(0,sucursales->getTam()-1);
                                //Guardar un partido auxiliar para eliminar los empleados con ese partido
								Partido partidoAux = sucursales->buscar(Eleccion);
								
                                sucursales -> borrar(Eleccion);
                                
                                for(int i = 0; i < empleados->getTam(); i++){
                                	Empleado EmpleadoAux = empleados->buscar(i);
                                    string aux1 = EmpleadoAux.getPartido().getNombre();
                                    string aux2 = partidoAux.getNombre();

                                	if(EmpleadoAux.getPartido().getNombre() == partidoAux.getNombre()){
                                		empleados->borrar(i);
									}
                                    EmpleadoAux = empleados->buscar(i);
                                    while(EmpleadoAux.getPartido().getNombre() == partidoAux.getNombre())
                                    {
                                        empleados->borrar(i);
                                        EmpleadoAux = empleados->buscar(i);
                                    }
								}

								system("Pause");
								
                                break;
                            }
                            case 2: { //Eliminar Empleado

                                cout << "�Que Empleado deseas Eliminar?" << endl;
                                opcionLista.mostrarempleados(empleados);
                                Opcion = leerEntrada(0,empleados->getTam()-1);

                                empleados -> borrar(Opcion);

                                break;
                            }
                            case 3: { // Eliminar Ciudades

                                cout << "�Que ciudades deseas Eliminar?" << endl;
                                opcionLista.mostrarCiudades(ciudades);
                                Opcion = leerEntrada(0, ciudades->getTam()-1);
								
								Ciudad ciudadAux = ciudades->buscar(Opcion);
								
                                ciudades -> borrar(Opcion);
                                
                                //Borrar los empleados que residan en esa ciudad
                                
                                for(int i = 0; i < empleados->getTam(); i++){
                                	Empleado EmpleadoAux = empleados->buscar(i);
                                	if(EmpleadoAux.getCiudadResidencia().getNombre() == ciudadAux.getNombre()){
                                		empleados->borrar(i);
									}
                                    EmpleadoAux = empleados->buscar(i);
                                    while(EmpleadoAux.getCiudadResidencia().getNombre() == ciudadAux.getNombre())
                                    {
                                        empleados->borrar(i);
                                        EmpleadoAux = empleados->buscar(i);
                                    }

								}
								
                                break;
                            }
                        }
                        break;
                    }
                }
                Opcion = 0;
                opcionConsultas.actualizar(ciudades, sucursales, empleados);
                break;
            }
            case 6: {
                system("cls");
                //FINALIZAR Y GUARDAR EN LOS ARCHIVOS PLANOS

                //Escribir en el archivo plano los sucursales de la lista
                Archivos sucursales("sucursales");
                string textosucursales;

                for (int i = 0; i < sucursales -> getTam(); i++) {
                    Partido partido = sucursales -> buscar(i); // Declaraci�n del partido de la lista para a�adir su informaci�n al texto plano
                    textosucursales += partido.getNombre() + "," + partido.getRepresentanteLegal() + "\n";
                }

                sucursales.escribir(textosucursales);

                //Escribir en el archivo plano las ciudades de la lista

                Archivos Ciudades("Ciudades");
                string textoCiudades;

                for (int i = 0; i < ciudades -> getTam(); i++) {
                    Ciudad ciudad = ciudades -> buscar(i);
                    textoCiudades += ciudad.getNombre() + "," + ciudad.getDepartamento() + "," + to_string(ciudad.getTamConcejo()) + "," + to_string(ciudad.getCensoElectoral()) + "\n";
                }

                Ciudades.escribir(textoCiudades);

                //Escribir en el archivo plano los empleados de la lista

                Archivos empleados("empleados");
                string textoempleados;

                for (int i = 0; i < empleados -> getTam(); i++) {
                    Empleado Empleado = empleados -> buscar(i);
                    textoempleados += Empleado.getNombre() + "," + Empleado.getApellido() + "," + Empleado.getPuesto() + "," + Empleado.getNumIdentificacion() + "," + Empleado.getSexo() + "," + Empleado.getEstadoCivil() + "," + Empleado.getFechaNacimiento() + "," + Empleado.getCiudadNacimiento().getNombre() + "," + Empleado.getCiudadResidencia().getNombre() + "," + Empleado.getPartido().getNombre()+",0\n";
                }
                
                empleados.escribir(textoempleados);

                programa = false;
                break;
            }
        }
    }
}
void Simulacion::MostrarMenu() {
    cout << "Registraduria Nacional del Estado Civil" << endl;
    cout << "Menu Principal" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "1. Buscar listas por categoria" << endl;
    cout << "2. Realizar consultas" << endl;
    cout << "3. Obtener Estadisticas" << endl;
    cout << "4. Simular Proceso electoral" << endl;
    cout << "5. Insertar, Modificar y Eliminar" << endl;
    cout << "6. Salir" << endl;
}

void Simulacion::SubMenuListas() {
    cout << "Buscar Listas por categoria" << endl;
    cout << "1. Ciudades para las cuales se realizar� el proceso electoral." << endl;
    cout << "2. sucursales legalmente reconocidos." << endl;
    cout << "3. Todos los empleados al concejo de una ciudad." << endl;
    cout << "4. Todos los empleados a la alcald�a de una ciudad." << endl;
    cout << "5. empleados a cada una de las alcald�as, por partido." << endl;
    cout << "6. empleados a cada uno de los concejos, por partido." << endl;
    cout << "7. Por cada partido, la lista de empleados a los concejos." << endl;
    cout << "8. Por cada partido, la lista de empleados a las alcald�as." << endl;

}

void Simulacion::SubMenuConsultas() {
    cout << "Realizar una consulta" << endl;
    cout << "1. Dado un partido y una ciudad, mostrar la lista de sus empleados al Concejo y el Empleado a la alcald�a." << endl;
    cout << "2. Dado un partido mostrar la lista de empleados a alcald�as de cada una de las diferentes ciudades." << endl;
    cout << "3. Dado un partido mostrar las listas de empleados a cada uno de los diferentes concejos." << endl;
    cout << "4. Dada una ciudad, mostrar por cada partido, el Empleado a la alcald�a y los empleados al concejo" << endl;
    cout << "5. Dada una ciudad, mostrar el tarjet�n de empleados a la alcald�a." << endl;
    cout << "6. Dada una ciudad, mostrar el tarjet�n de empleados al concejo." << endl;
    cout << "7. Censo electoral. Por cada ciudad, mostrar la cantidad de personas habilitadas para votar." << endl;
}

void Simulacion::SubMenuEstadisticas() {
    cout << "Estadisticas" << endl;
    cout << "1. Ver el reporte por ciudad" << endl;
    cout << "2. Ver el reporte por alcaldia o concejo" << endl;
    cout << "3. Ver el reporte total nacional" << endl;
}

void Simulacion::SubMenuInsercion() {
    cout << "1. Insertar" << endl;
    cout << "2. Modificar" << endl;
    cout << "3. Eliminar" << endl;
}

void Simulacion::EleccionSubMenuInsercion() {
    cout << "1. Partido" << endl;
    cout << "2. Empleado" << endl;
    cout << "3. Ciudad" << endl;
}

string Simulacion::elegirPartido()
{
    int pos = 0;
    cout << "Escriba el número del partido que desea elegir: " << endl;
    opcionLista.mostrarsucursales(sucursales);
    pos = leerEntrada(0,sucursales->getTam()-1);
    return sucursales->buscar(pos).getNombre();
}

string Simulacion::elegirCiudad()
{
    int pos = 0;
    cout << "Escriba el número de la ciudad que desea elegir: " << endl;
    opcionLista.mostrarCiudades(ciudades);
    pos = leerEntrada(0,ciudades->getTam()-1);
    return ciudades->buscar(pos).getNombre();
}


