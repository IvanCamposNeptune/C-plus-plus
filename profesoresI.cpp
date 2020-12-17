#include <conio.h>
#include <iostream>
using namespace std;

int main ()
{
	system("color a");
	

struct tipoDatos
{
    string nombreFich;        // Nombre del fichero
    long tamanyo;            // El tamaño en bytes
};
 
int numeroFichas=0;  // Número de fichas que ya tenemos
int i;               // Para bucles
int opcion;          // La opcion del menu que elija el usuario
 
string textoTemporal; // Para pedir datos al usuario
int numeroTemporal;

    tipoDatos *fichas = new tipoDatos[1000];
 
    do
    {
        // Menu principal
        cout << endl;
        cout << "\tEscoja una opcion:" << endl;
        cout << "1.- Registrar a los trabajadores de la institucion" << endl;
        cout << "2.- Mostrar los nombres de todos los trabajadores de la institucion " << endl;
        cout << "3.- Mostrar trabajadores de una sola seccion (adminitrativos, o profesores)" << endl;
        cout << "4.- Ingresar la calificacion de tres almnos y ver el promdio mas alto" << endl;
		
		cin>>opcion;
		
 
        // Hacemos una cosa u otra según la opción escogida
        switch(opcion)
        {
            case 1:
                if (numeroFichas < 1000)   // Si queda hueco
                {
                    cout << "Introduce el nombre del trabajador: ";
                    cin >> fichas[numeroFichas].nombreFich;
                    cout << "--00-- si es profesor, y  si es administrativo --01--: ";
                    cin >> fichas[numeroFichas].tamanyo;
                    numeroFichas++;  // Y tenemos una ficha más
                     system("cls");
                }
                else   // Si no hay hueco para más fichas, avisamos
                    cout << "Máximo de fichas alcanzado (1000)!" << endl;
                break;
 
            case 2: // Mostrar todos
                for (i=0; i<numeroFichas; i++)
                    cout << "Nombre: " << fichas[i].nombreFich
                        << "; Seccion: " << fichas[i].tamanyo
                        << "dado de alta como trabajador de la institucion" << endl;
                break;
 
            case 3: // Mostrar según el tamaño
                cout << "Que seccion deseas ver? 00, o 01: ";
                cin >> numeroTemporal;
                for (i=0; i<numeroFichas; i++)
                    if (fichas[i].tamanyo >= numeroTemporal)
                        cout << "Nombre: " << fichas[i].nombreFich
                            << "; Seccion: " << fichas[i].tamanyo
                            << " dado de alta como trabajador de la institucion" << endl;
                break;
 
            case 4: // Salir: avisamos de que salimos
                cout << "\n Solo tres alumnos\n" << endl;
                break;
 
            default: // Otra opcion: no válida
                cout << "Opción desconocida" << endl;
                break;
        }
    } while (opcion != 4);  // Si la opcion es 5, terminamos
 
	int a, b, c ;
	cout<<"calificaion alumno 01 "<<endl;
	cin>>a;
	cout<<"calificaion alumno 02 "<<endl;
	cin>>b;
	cout<<"calificaion  alumno 03 "<<endl;
	cin>>b;
	if ((a>=b) && ( a>=c  ))   {
	cout << "\nLa mayor calificacion es del alumno 01: " <<endl << a;
}
	if ((b>=a) && (b>=c ) ) {
		cout << "\nLa mayor calificacion es del alumno 02: "<<endl << b;
	} 
	if ((c>=a) && ( c>=b) ) {
		cout << "\nLa mayor calificacion es del alumno 03: "<<endl << c;
	}

	
	getch();
 
    return 0;
}
 	
	
	
	
	
	
	
	
	
	

