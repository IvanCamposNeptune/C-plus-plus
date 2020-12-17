#include <iostream>
#include <stdlib.h> //para el system("pause"); ,  O  #include <conio.h> para usar el getch();

using namespace std;

//Creacion de clase padre(superclase)

class persona
{
private:
int Identidad;
public:
persona();
void capturarPersona();
void establecerPersona(int);
int obtenerIdentidad();
void imprimirPersona();
};

//Creacion de clase hija(subclase)

class estudiante : public persona //Herencia de los metodos publicos de la clase padre a clase hija
{
private:
int nroCuenta;
public:
estudiante();
void capturarEstudiante();
void establecerEstudiante(int);
int obtenerNroCuenta();
void imprimirEstudiante();
};

//Definicion de metodos

//Funciones de la clase persona
persona::persona()
{
int p = 0;
establecerPersona(p);
}

void persona::establecerPersona(int p)
{
Identidad = p;
}

int persona::obtenerIdentidad()
{
return Identidad;
}

void persona::capturarPersona()
{
int id = 0;
cout << "Ingrese Identidad: ";
cin >> id;
establecerPersona(id);
}

void persona::imprimirPersona()
{
cout << "\nIdentidad de Persona: " << Identidad;
}


// Funciones de la clase estudiante

estudiante::estudiante()
{
int cuenta = 0;
establecerEstudiante(cuenta);
}

void estudiante::establecerEstudiante(int c)
{
nroCuenta = c;
}

int estudiante::obtenerNroCuenta()
{
return nroCuenta;
}

void estudiante::capturarEstudiante()
{
int nroC = 0;
cout << "Ingrese número de cuenta: ";
cin >> nroC;
establecerEstudiante(nroC);
}

void estudiante::imprimirEstudiante()
{
cout << "\nNro Cuenta Estudiante: " << nroCuenta;
}

//Funcion Main
int main() {	
	system("color a");
	
estudiante e1;
cout << "\nCapturando los datos de un estudiante: " << endl;
e1.capturarPersona();
e1.capturarEstudiante();
cout << "\nImprimiendo los datos de un estudiante: " << endl;
e1.imprimirPersona();
e1.imprimirEstudiante();
cout << endl;
		
		
	system("pause");	
	return 0;
		
}
