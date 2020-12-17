/*Destructor
	Se encarga de eliminar todos los objetos que hayas creado de una clase
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class Perro{
	private:
	string nombre,raza;
	
	public:
	Perro(string,string);//Constructor
	~Perro();//Destructor, se llama igual que la clase, no tiene parametros y se le agrega una tilde al principio
	void mostrarDatos();
	void jugar();
		
};

//Definicion de Metodos

Perro::Perro(string _nombre, string _raza){// Constructor
	nombre = _nombre;
	raza = _raza;
}
	
Perro::~Perro(){//Destructor
	//No lleva nada adentro
}

void Perro::mostrarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Raza: "<<raza<<endl;
}

void Perro::jugar(){
	cout<<"El perro "<<nombre<<" esta jugando"<<endl;
}



int main(){
	system("color a");
	
	Perro perro1("Pudin","Chihuahua");//Creando objeto
	
	perro1.mostrarDatos();//Llamando al metodo con los parametros de perrito1
	perro1.jugar();//Llamando al metodo con los parametros de perrito1
	
	perro1.~Perro();//Destruyendo el objeto, no hace falta ponerlo por que al momento de que se declara al final del programa se ejecuta
	
	
	system("pause");
	return 0;
}
