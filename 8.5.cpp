#include <iostream>
#include <cmath>

using namespace std;

//Escriba las funciones o procedimientos aqui

/*
C�mo saber si un a�o va a ser bisiesto
Los a�os bisiestos son los divisibles entre 4 (como 2004, 2008, etc.) 
excepto si es divisible entre 100, entonces no es bisiesto (como 2100, 2200, etc.)
*/

int main() {
  	//Reciba las entradas correspondientes
  	int anio;
  
  	cout<<"Digite un numero de a�o: "; cin>>anio;
  	
  	//Ejecute las funciones e imprima los mensajes correspondientes
  	
		if(anio>=2000 && (anio%4 == 0 && (anio%100 != 0 || anio%400 == 0))){ //Para que no sea bisiesto tiene que ser multiplo de 100 pero no tiene que serlo de 400 por que seria divisible entre 4 y entraria como bisiesto.
  		cout<<"El a�o es bisiesto y es mayor a 2000"<<endl;
  		}
  		else{
  		cout<<"El a�o no es bisiesto o no es mayor a 2000"<<endl;
  		}

}
