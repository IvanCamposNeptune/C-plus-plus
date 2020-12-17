/*Herencia en POO 

*/

#include<iostream>
#include<stdlib.h>
using namespace std;




//Creacion de la clase Padre

class Persona{//Esta sera la clase que hereda o clase padre
	
	private://Atributos, si se pusiera en protected pueden ser manipulados por clases a las que hereda
	string nombre;
	int edad;
	
	public://Metodos
	Persona(string, int);//Constructor
	void mostrarPersona();
		
};




//Creacion de otra clase Hija

class Alumno : public Persona{//Alumno es clase hija de Persona y Alumno podra acceder a lo publico que haya en clase Persona
	private://Atributos 
	string codigoAlumno;
	float notaFinal;
	
	public: //Metodos
	Alumno(string, int, string, float);//Constructor ,Como esta heredando de la clase Persona ahora tiene 4 atributos y se ponen en orden (nombre,edad,codigo,nota)
	void mostrarAlumno();
};




//Definicion de Metodos

Persona::Persona(string _nombre,int _edad){//Constructor de la clase Persona
	nombre = _nombre;
	edad = _edad;
}


//Como Alumno heredo de la clase Persona se tienen que poner los parametros de los atributos en orden de la clase Persona y Alumno

Alumno::Alumno(string _nombre,int _edad,string _codigoAlumno,float _notaFinal) : Persona(_nombre,_edad){//Constructor de la clase Alumno,  Se manda llamar el constructor de la clase padre con...  : Persona(_nombre,_edad) , esta diciendo que ya tiene definido nombre y edad por parte de la clase Persona
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

void Alumno::mostrarAlumno(){
	mostrarPersona();//Para imprimir el nombre y la edad
	cout<<"Codigo Alumno: "<<codigoAlumno<<endl;
	cout<<"Nota Final: "<<notaFinal<<endl;
}




int main(){
	system("color a");
	
	Alumno alumno1("Ivan",18,"1631113243",10.0);//Inicializando los parametros de el constructor Alumno que fue heredado por la clase Persona
	
	alumno1.mostrarAlumno();//Mostrando los datos 
	
	
	
	system("pause");
	return 0;
}
