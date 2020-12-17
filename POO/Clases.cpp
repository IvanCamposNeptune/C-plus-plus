/*Clases en C++

*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{//Se crea la clase Persona
	
	private:			//Se pone private para encapsular los atributos
	int edad;	//Se abstraen los datos mas importantes ignorando los superluos
	string nombre;
	
	public:				//Metodos de tipo publico para que todos puedan ejecutarlos
	Persona(int,string);	//Metodo constructor Ayuda a inicializar los atributos (características del objeto), se llama igual que la clase. (edad,nombre)
	void leer();
	void correr();
	
};

//Constructor
Persona::Persona(int _edad,string _nombre){//Inicializando el constructor con nombres de parametros diferentes, :: significa pertenencia
	edad = _edad;// se les da el valor
	nombre = _nombre;
}

void Persona::leer(){//Metodo leer que pertenece a la clase Persona
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona::correr(){//Metodo correr que pertenece a la clase Persona
	cout<<"Soy "<<nombre<<" y estoy corriendo una maraton"<<" y tengo "<<edad<<" anios"<<endl;
}


int main(){
	system("color a");

	
	//Creando un Objeto de clase Persona llamado p1
				//Inicializacion de la manera convencional	
	Persona p1 = Persona(18,"Ivan");// Se inicializo el objeto con el costructor y sus respectivos parametros
	
	p1.leer();//Se llama al metodo leer y ejecuta lo que realiza ese metodo con los atributos de p1
	
	
	
		//Creando otro Objeto de clase Persona llamado p2
		//Inicializacion directa
	Persona p2(18,"Lucy");
	
	p2.correr();//Se llama al metodo correr y ejecuta lo que realiza ese metodo con los atributos de p2
	
	
	
		//Creando otro Objeto de clase Persona llamado p3
	Persona p3(20,"Laura");//Inicializacion directa
	
	p3.leer();//Ejecuta el metodo leer con los atributos de p3
	p3.correr();//Ejecuta el metodo correr con los atributos de p3
	
	
	system("pause");
	return 0;
}





