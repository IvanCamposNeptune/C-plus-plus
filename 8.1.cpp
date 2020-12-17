#include <iostream>
#include <cmath>
#include <iomanip>//Para usar el setpresicion

using namespace std;

/*
Funcion: Una función realiza una tarea concreta y puede ser diseñada, implementada y depurara de manera independiente al resto del código.

Dominio de función: Conjunto de todas las entradas sobre las que la funcion tiene salidas definidas.

*/


//Escriba aqui las funciones

                                //Definicion de funciones
//Raiz cuadrada
void Raiznum(double n);
void Lognum(double n);
void Pisonum(double n);
void Techonum(double n);
void Fraccionarianum(double n);
void Redondeonum(double n);



//Variables globales
double raiz, logaritmo, piso, techo, fraccionaria;


int main() {
  //imprima "Ingrese un numero"
  cout<<"Ingrese un numero: ";
  
  //Reciba un numero ingresado por el usuario
  double numero;
  cin>>numero;
  
  if(numero<=0){
  	cout<<"Error el numero no es valido!"<<endl;
  }
  else{

  //Ejecute la funcion raiz e imprima en pantalla su resultado 
  
 	 Raiznum(numero);

  //Ejecute la funcion logaritmo e imprima en pantalla su resultado 
  
  	Lognum(numero);

  //Ejecute la funcion piso de dicho numero e imprima en pantalla su resultado 
	
	Pisonum(numero);
  
  //Ejecute la funcion techo de dicho numero e imprima en pantalla su resultado 
  
  	Techonum(numero);

  //Ejecute la funcion parteFraccionaria de dicho numero e imprima en pantalla su resultado 
  
  	Fraccionarianum(numero);

  //Ejecute la funcion redondeo e imprima en pantalla su resultado 
  
  	Redondeonum(numero);
  	
  }
  	
}


//Definicion de funciones

//Raiz cuadrada

void Raiznum(double n){
  
  raiz = sqrt(n);

  cout<<setprecision(4)<<"El resultado de la raiz es: "<<raiz<<endl;

  
}

void Lognum(double n){
	
	logaritmo = log10(n);

	cout<<setprecision(3)<<"El logaritmo del numero es: "<<logaritmo<<endl;
	
}

void Pisonum(double n){
	
	piso = floor(n);
	
	cout<<"El piso del numero es: "<<piso<<endl;
	
}

void Techonum(double n){
	
	techo = ceil(n);
	
	cout<<"El techo del numero es: "<<techo<<endl;
	
}

void Fraccionarianum(double n){
	
	int entero = n; //Solo guarda el numero entero del numero que se ingreso con decimales.
	
	fraccionaria = n - entero;
	
	cout<<setprecision(4)<<"La parte fraccionaria del numero es: "<<fraccionaria<<endl;
	
}

void Redondeonum(double n){
	
	int entero = n;
	
	cout<<"El redondeo del numero es: "<<entero<<endl;
	
}












