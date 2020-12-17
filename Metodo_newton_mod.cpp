#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

float funcion(float x){
	return	( pow(x,3) - (5*pow(x,2)) + (7*x) -3);
}

float fdx(float x){
	return ( (3*pow(x,2)) - (10*x) + 7);
}

float fddx(float x){
	return ((6*x) -10);
}

int main()
{
	float xi, error, rf;  
	int ni;
	
	
	printf("Ingresa el valor de Xi: \n");
	scanf("%f", &xi);
	printf("Cuantas iteraciones realizara?\n");
	scanf("%i", &ni);
	
	float aux[ni];
	
	for(int i=0; i<ni; i++){
		printf("El valor de x%i es: %f\n", i,xi);
		rf=( (funcion(xi) * fdx(xi)) / ( pow (fdx(xi),2) - (funcion(xi) * fddx(xi))));
		xi-=rf;	
		
		aux[i]=xi;
		
		if (i>0){
			error= (( aux[i] - aux[i-1]) / aux[i]) * 100;
			
			if(error<0){
				error*=-1;	
				}
			}
		printf("Error: %f\n", error);
	}  

    system("Pause");    
    return 0;           
}
