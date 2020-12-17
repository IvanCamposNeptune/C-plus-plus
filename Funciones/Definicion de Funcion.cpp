/*Funciones
	
	Una función realiza una tarea concreta y puede ser diseñada, implementada y depurara de manera independiente al resto del código 
	
	Sintaxis:
	
	tipo nombre(tipo var1, tipo var2,..., tipo varn){
		conjunto de instrucciones;
	}
	
	Dependiendo del tipo de funcion el retorno tiene que ser del mismo tipo 
	
	ESTRUCTURA:
	
	directivas del preprocesador
	
	prototipos de función
	
	int main(){
		
		conjunto de instrucciones
		
		return valor
	}
	
	definiciones de funcion

*/

#include <iostream>
#include <stdlib.h> //para el system("pause"); ,  O  #include <conio.h> para usar el getch();
using namespace std;


//Prototipo de Funcion
int encontrarMax(int x, int y); //Funcion que retornara un valor entero y tiene 2 parametros con los que operara



int main() {	
	system("color a");
	
	int n1,n2;
	int mayor;// para el valor que regresara la funcion
	
	//Conjunto de instrucciones
	cout<<"Digite el primer numero: "; cin>>n1;
	cout<<"Digite el segundo numero: "; cin>>n2;
	
//La variable mayor tendra el retorno de la funcion, Se manda a la funcion encontrarMax los valores de n1 y n2 a sus parametros separados por la coma
// n1 corresponde a x  , n2 corresponde a y
	mayor = encontrarMax(n1,n2);

	cout<<"\nEl mayor de los numeros es: "<<mayor<<endl;//Imprimiendo el retorno de la funcion
	
	
// O simplemente se puede imprimir la funcion por que es un valor.

	cout<<"\nEl mayor de los numeros es: "<<encontrarMax(n1,n2)lo<<endl;//La funcion encontrarMax es un valor
		
		
		
		
	system("pause");	
	return 0;	
}



//Definicion de Funcion

int encontrarMax(int x, int y){// en ves de punto y coma se abre un delimitador de ambito
	
	int numMax; //Nueva variable
	
	if(x>y){
		numMax=x;
	}
	else{
		numMax=y;
	}
	
	return numMax;//Se ira a la variable mayor
}

