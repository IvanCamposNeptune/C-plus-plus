#include<iostream>
#include<stdlib.h>
#include<time.h>//para numeros aleatorios
#include<conio.h>

using namespace std;

int main()
{
	system("color a");
	
	int numeros[100][100],dato,nfilas,ncol; //Tiene para maximo 100 filas y 100 columnas
	int numeros2[100][100];
	
	cout<<"Digite el numero de filas: ";
	cin>>nfilas;
	cout<<"Digite el numero de columnas: ";
	cin>>ncol;
	
	cout<<"\n";
	
	srand(time(NULL)); //Genera numeros aleatorios
	
	//Rellenando la matriz de numeros aleatorios
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			
			dato = 1+rand()%(100);//Generando numeros aleatorios entre (1-100)
			numeros[i][j]=dato;
		}
	}
	
		//Copiando la matriz 1 a la matriz 2
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			numeros2[i][j] = numeros[i][j];
		}
	}

	//Imprimiendo matriz
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			
		cout<<numeros2[i][j]<<" ";
		
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	
	
	system("pause");
	return 0;
	
}
