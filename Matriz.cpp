#include <stdio.h>
#include<iostream> //Funciones de entrada-salida estándar
using namespace std;
main()
  {
  system("color a");	
  float m[3][4];  //Una matriz de 3 x 4
  int filas=3, columnas=4;
  int f,c;
  
  
  printf("Dame los elementos de la mattriz\n");  
  
  for (f=0;f<filas;f++)  //Recibe los elementos de la matriz
    for (c=0;c<columnas;c++)
       {
       printf("Elemento %i, %i:",f,c);  
       scanf("%f",&m[f][c]);    	
	   }
  
  printf("La matriz que me diste es:\n");  

  for (f=0;f<filas;f++)  //Escribe los elementos de la matriz
    {
    for (c=0;c<columnas;c++)
       {
       printf("%.2f\t",m[f][c]);  
	   }
    printf("\n");  // Inicia un nuevo renglón
    }
  printf("La matriz transpuesta es:\n");
  for (f=0;f<columnas;f++)  
    {
    for (c=0;c<filas;c++)
    {
    	printf("%.2f\t",m[c][f]);  
	}
	printf("\n");
   }
  printf("\n\nPresione una tecla para continuar...");    
  system ("pause");
  return 0; //Se detiene hasta presionar una tecla
  }
  
  // Este programa recibe valores para los 12 elementos de la matriz
  // y enseguida los muestra en forma de arreglo en la pantalla,
  // agregue código para que además muestre la matriz transpuesta
    
