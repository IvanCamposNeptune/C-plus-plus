#include <iostream>
#include <stdlib.h>

/* Vector 
	
	DECLARACION:
	
	tipo nombre[tama�o];
	
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
	
	int numero[100],n,mayor=0;

	cout<<"Digite los elementos que va a tener el arreglo: ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Digite un numero: ";
		cin>>numero[i]; //Guarda el numero en su posicion con el valor de i
	
		//Compara cual numero es el mayor 
	
		if(numero[i] > mayor)
		{
			mayor = numero[i];
		}
	}
	
	cout<<"El mayor elemento del vector es: "<<mayor<<endl;
		
	
	system("pause");
	return 0;
}
