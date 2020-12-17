/*Busqueda Secuencial

Bucara secuencialmente en todas las posiciones del arreglo haber si existe el dato.

int a[5] = {3,4,2,1,5};  
int dato = 4;

*/

#include<iostream>
#include<stdlib.h>


using namespace std;

int main(){
	system("color a");
	
	int a[] = {3,4,2,1,5};  //{0,1,2,3,4} posiciones del arreglo
	int i,dato;
	char band='F';
	
	dato=4;
	
	//Busqueda secuencial
	i=0;
	
	while((band =='F') && (i<5)){
		if(a[i] == dato){
			band= 'V' ;
		}
		i++;//aumento
	}
	
	if(band == 'F'){
		cout<<"El numero a buscar no existe en el arreglo ";
	}
	else if(band == 'V'){
		cout<<"El numero ha sido encontrado en la posicion: "<<i-1<<endl;//Quita el aumento demas que se hizo
	}
	
	
	system("pause");
	return 0;
	
}
