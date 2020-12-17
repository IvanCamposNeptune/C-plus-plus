/*Punteros 
	Variable que almacena la direccion de memoria de otra variable
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	system("color a");

	//Manera tradicional
	int num; 
	num = 20;
	
	cout<<"Numero: "<<num<<endl;
	cout<<"Direccion de memoria: "<<&num<<endl;// El & significa la direccion de memoria donde esta guardada la variable de delante
	
	
	//Utilizacion de punteros
	int *dir_num;//Declara a dir_num como puntero que guarda la direccion de memoria de una variable tipo int
	dir_num = &num;//Almacena la direccion de memoria de num,con los punteros se puede imprimir lo que hay en esa direccion de memoria
	
	cout<<"\nNumero: "<<*dir_num<<endl;//*dir_num , Impime lo que hay en la direccion de memoria que se le paso
	cout<<"Direccion de memoria: "<<dir_num<<endl;//Sin el asterisco solo imprime la direccion de memoria
	
	
	
	getch();
	return 0;
}
