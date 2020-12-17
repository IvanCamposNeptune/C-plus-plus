/*Metodos Constructores y Modificadores (Getters y Setters)
	Setters para establecer valores, Getters para obtener los valores
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class Punto{
	private://Atributos
	int x,y;
			
	public://Metodos
	Punto();//Constructor
	void setPunto(int,int);//Set es Dar o establecer
	int getPuntoX();//Get es Mostrar informacion
	int getPuntoY();
};

//Definicion de Metodos

Punto::Punto(){//Constructor
}

//Setter
void Punto::setPunto(int _x, int _y){//Funcion Setter, Establece valores a los atributos
	x = _x;
	y = _y;	
}

//Getter
int Punto::getPuntoX(){//Retorna un tipo entero
	return x;//Devuelve el valor de X
}

int Punto::getPuntoY(){//Retorna un tipo entero
	return y;//Devuelve el valor de Y
}



int main(){
	system("color a");
	
	Punto punto1;
	
	punto1.setPunto(15,10);//Dandole valores con el metodo setPunto
	cout<<punto1.getPuntoX()<<endl;//Imprimiendo el valor de lo que retorna el metodo getPuntoX
	cout<<punto1.getPuntoY()<<endl;

	
	system("pause");
	return 0;
}
