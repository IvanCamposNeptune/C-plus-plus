#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

float funcion(float x){
	return (exp(-x) -x);
}

int main()
{   
	float xi, error, rf,  s, mo;
	int ni;

	printf("Ingresa el valor de xi\n");
	scanf("%f", &xi);
	printf("Ingresa el valor de S\n");
	scanf("%f", &s);
	printf("Cuantas iteraciones realizara?\n");
	scanf("%i", &ni); 
	
	double aux[ni];
	
	for(int i=0; i<ni; i++){
		printf("El valor de x%i es: %f\n", i, xi);
		mo=xi+(s*xi);
		rf= ( (s*xi) * funcion(xi) ) / ( (funcion(mo)) - funcion(xi) ) ;
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

    system("Pause");    // Hacer una pausa
    return 0;           // Valor de retorno al S.O.
}

