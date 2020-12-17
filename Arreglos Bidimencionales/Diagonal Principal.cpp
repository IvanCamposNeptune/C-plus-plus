#include <iostream>
#include<stdlib.h>


/*Mostrar la matriz principal de una matriz

1 2 3   	1
4 5 6			5
7 8 9     			9

Es donde el valor de las filas y columnas es el mismo. [0][0] [1][1] [2][2]

*/

using namespace std;

int main()
{
	system("color a");
	
	int numeros[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	cout<<"Mostrando la matriz completa: \n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nMostrando la diagonal principal: \n" ;
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
			if(i==j)
			{
			cout<<numeros[i][j];
			
			cout<<"\n";
			}
		}
	}
	
	cout<<"\n";
	
	
	
	system("pause");
	return 0;
	
}
