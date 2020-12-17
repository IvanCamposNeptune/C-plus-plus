#include <iostream>
#include <stdlib.h>

/* Arreglo bidimensional

	tipo nombre[numero de filas][numero de columnas];
	
	ejemplos:
	
	int numeros[2][3]; primero filas luego columnas, 2 filas, 3 columnas.
	char letras[3][2];
	
	Para consultar:
	cout<<numeros[1][2]; te muestra el valor de la matriz numeros en su posicion fila 1 columna 2.
	
*/

using namespace std;

int main()
{
	system("color a");
	
		int numeros[100][100], filas,columnas;
		
		cout<<"Digite el numero de filas: "; cin>>filas;
		cout<<"Digite el numero de columnas: "; cin>>columnas;
		cout<<"\n";
		
		//Almacenando elementos en la matriz
		
		for(int i=0; i<filas; i++) //Primer bucle controla las FILAS
		{
			for(int j=0; j<columnas; j++)//Segundo bucle controla las COLUMNAS
			{
				cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
				cin>>numeros[i][j];
			}	
		}
		cout<<"\n"; //salto de linea para separar de la matriz
		
	//Mostrando la matriz
			cout<<"\t";
			for(int i=0; i<filas; i++) //Primer bucle controla las FILAS
		{
			for(int j=0; j<columnas; j++)//Segundo bucle controla las COLUMNAS
			{
				cout<<numeros[i][j]<<" ";//espacio para separar los numeros de la fila
			}	
			cout<<"\n"; //una vez que termina de mostrar la primer fila salta para poner la otra fila
			cout<<"\t";
		}
		
			cout<<"\n";
	
		
	
	
	system("pause");
	return 0;
}
