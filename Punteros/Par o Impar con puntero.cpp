/*Punteros 
	Variable que almacena la direccion de memoria de otra variable
*/

//Par o impar 
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	system("color a");
	
	int num,*dir_numero;//Puntero tipo entero llamado dir_num
	
	cout<<"Digite un numero: "; cin>>num;
	
	dir_numero = &num; //Guardando la posicion de memoria de numero en dir_numero
	
	if(*dir_numero%2==0){//comparando si el valor que contiene la direccion de memoria de dir_numero el residuo es igual a 0
		cout<<"El numero es par"<<endl;
		cout<<"Su direcion de memoria es: "<<dir_numero;
	}
	else{
		cout<<"El numero es impar"<<endl;
		cout<<"Su direcion de memoria es: "<<dir_numero;
	}
	
	getch();
	return 0;
}
