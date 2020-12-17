#include <iostream>
#include <stdlib.h>

/* Vector 
	
	DECLARACION:
	
	tipo nombre[tamaño];
	
	ejemplo:
	
	int numero[10]
	
	DEFINICION:
	
	int numero[]={1,4,6,7,3};
	
	ALMACENAMIENTO:
	
	numero[0]=1;
	numero[1]=4;
	numero[2]=6;
	numero[3]=7;
	numero[4]=3;
	
	
	
*/


using namespace std;

int main()
{
	system("color a");
	
	int numeros[] = {1,2,3,4,5};
	int suma=0;
	
	for(int i=0; i<5; i++)
	{
		suma += numeros[i];
	}
	
	cout<<"La suma de los elementos del vector es: "<<suma<<endl;
	
	
	
	system("pause");
	return 0;
}
