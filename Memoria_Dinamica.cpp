#include <stdio.h> //Funciones de entrada-salida estándar 
#include <malloc.h> //Funciones uso dinámico de memoria 
#include <math.h> //Libreria par utilizar la funcion pow (Raiz Cuadrada)
#include <conio.h>
#include<iostream>
main() { float *Datos; //Puntero a un conjunto de datos de punto flotante sin especificar cuantos son 
float suma=0, promedio;// Variables para calcular suma y promedio
double des=0,ti=0,ac; 
int n; // Número de datos 
int i; // Contador para ciclos for 

system("color a");

printf("Cuantos datos quieres procesar?:"); 
scanf("%i",&n); 	 
Datos=new float[n]; //Asigna memoria para n números de punto flotante 
//La ubicación en memoria del primer elemento se almacena en Datos 
for (i=0;i<n;i++) //Recibe los datos 
        { 
          printf("Siguiente dato:"); 
		  scanf("%f",&Datos[i]); 	 	
        } 
		for (i=0;i<n;i++)  
		suma+=Datos[i]; //Calcula la suma acumulando en variable suma
		promedio=suma/n; //Calcula el promedio
		
		for (i=0;i<n;i++){
		des=(Datos[i]-promedio);
		ti+=pow(des,2);
		}
		ac=sqrt(ti/n);
		
	
		printf("\n\nLos datos que me diste son:"); 
		for (i=0;i<n;i++) //Muestra los datos 
		{ 
			printf("\n%.2f",Datos[i]);
		} 
		delete(Datos); //Libera la memoria usada por los datos, no se usan en el resto del programa 	 
		printf("\n\n"); 
		printf("La suma es: %.2f\n",suma); 
		printf("El promedio es: %.2f\n",promedio); 
		printf("La desviacion tipica: %.2lf \t",ac);
		printf("\n\nPresione una tecla para continuar..."); 
getch(); //Se detiene hasta presionar una tecla 
} 
// Modifique el programa para que además de suma y promedio 
// muestre la desviación típica (desviación estándar) 
// Nota: Si necesita elevar al cuadrado y extraer raiz tal 
// vez necesite incluir la librería math.h
