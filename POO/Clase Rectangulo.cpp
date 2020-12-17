/*Clase Rectangulo

*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Rectangulo{//Se crea la clase Rectangulo (Las clases van con Mayuscula)
	
	private:			//Se pone private para encapsular los atributos
		float largo,ancho;
	
	public:				//Metodos de tipo publico para que todos puedan ejecutarlos
		Rectangulo(float,float);//Constructor que recibe parametros de tipo float (largo,ancho)
		void perimetro();
		void area();
	
};

//Definicion de Metodos

//Constructor
Rectangulo::Rectangulo(float _largo,float _ancho){//Inicializando el constructor con nombres de parametros diferentes, :: significa pertenencia
	largo = _largo;// se les da el valor
	ancho = _ancho;
}

//perimetro
void Rectangulo::perimetro(){//Metodo leer que pertenece a la clase Persona
	float _perimetro; //Variable donde se almacenara el perimetro
	
	_perimetro = (2*largo) + (2*ancho);
	
	cout<<"El perimetro es: "<<_perimetro<<endl;
	
}

//area
void Rectangulo::area(){//Metodo correr que pertenece a la clase Persona
	float _area;
	
	_area = largo * ancho;
	
	cout<<"El area es: "<<_area<<endl;
	
}


int main(){
	system("color a");

	//Instanziacion de clases, Instanciar una clase es Crear un objeto
	
	Rectangulo r1(11,7);//Mandando parametros (largo, ancho)
	
	r1.perimetro();//Mandando llamar el metodo perimetro con los atributos de r1
	r1.area();//Mandando llamar el metodo area con los atributos de r1
	
	
	system("pause");
	return 0;
}
