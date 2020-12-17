/*Parte fraccionaria de un numero

	Funcionque te devuelve la parte fraccionaria de un numero
	
	Si se introduce 256.879 se despliega solo 0.879
	
*/
#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de Funcion
void pedirDatos();//Funcion para almacenar datos
float parteFraccionaria(float num);//Funcion para devolver la parte fraccionaria de un numero retorna float

float numero;//variable global donde se guardara el numero que digite




int main(){
	system("color a");
	
	pedirDatos();//Se piden los datos
	
	cout<<"La parte fraccionaria del numero es: "<<parteFraccionaria(numero);//Se manda como parametro el valor del numero que se digito
	
	
	getch();
	return 0;
}



//Definicion de Funcion
void pedirDatos(){
		cout<<"Digite un numero: ";
		cin>>numero;//Se guarda en la variable global
	
}

float parteFraccionaria(float num){
	
	int entero = num; // se guarda solo el entero del numero que se digito	
	
	float resultado = num - entero;// se le resta a ese mismo numero el entero
	
	return resultado;
	
}



