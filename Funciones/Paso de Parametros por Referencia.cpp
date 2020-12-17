/*Paso de parametros por referencia 

	Antes se hacia el paso de parametros por valor
	
	Esto se hace con la direccion de memoria de una variable
	
*/
#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de Funcion

void valNuevo(int&, int&);//Indica donde se almacenan dichas variables para imprimir su valor o cambiarlo


int main(){
	system("color a");
	
	int num1, num2;
	
	cout<<"Digita el primer numero: "; cin>>num1;
	cout<<"Digita el segundo numero: "; cin>>num2;
	
	valNuevo(num1,num2);//Se llama a la funcion y se dan las direcciones de memoria de las variables num1 y num2
	
	//Despues de que se ejecuto la funcion valNuevo se cambio el valor de la direccion de memoria y se imprimen los nuevos valores aqui en el main
	cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
	cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;
	
	
	getch();
	return 0;
}


//Definicion de Funcion

void valNuevo(int& xnum, int& ynum){//Recibe como parametro la direccion de memoria con el & de la variable que se le haya puesto cuando se llama a la funcion en el main
	
	cout<<"El valor del primer numero es: "<<xnum<<endl;//Imprimen el valor de lo que haya en la direccion de memoria
	cout<<"El valor del segundo numero es: "<<ynum<<endl;
	
	//Se puede cambiar el valor de la direccion de memoria de las variables
	xnum = 89;
	ynum = 45;	
	
	
}



