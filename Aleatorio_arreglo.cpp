#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#define RANDOM(A, B) (rand() % ((B) - (A) + 1) + (A))       

using namespace std;

int main(void)
{
	system("color a");
	
    int i,j;
	double num;// donde se almacena el valor aleatorio
	double aux;//donde se almacena el valor mayor o menor
	
	double vector[20];//tamaño de datos maximo.

    
    srand(time(NULL));//para que no se repita.
    
    
    for(i = 1; i <= 15; i++)
    {
	
	cout<<"Vector: "<<i<<endl;

    num= RANDOM(10*100,100*100) / 100.00; //genera un numero entre el 10 y el 100  multiplicado por 100 y dividivo entre 100 para que de 2 decimas.
    
    vector[i]=num;//num se almacena en vector con posicion de i la cual se incrementa en cada vuelta hasta llegar a 15
    
    printf("%.2f\n", num );// el %.2 limita las decimas a 2.
    
	
	}
	
	
	for(i = 1; i <= 15; i++)//Ahora se ordenaran i en posicion 1
	{	
		
		for(j=i + 1; j <= 15; j++)//se le suma uno a i para que j este en la posicion 2
		{
			
			if(vector[i]<vector[j])// Compara que "i=posicion 1" sea menor que "j=posicion 2" si es asi "j" cambia al lugar de "i" osea en la primer posicion 
			{
				
				aux=vector[i];//aux = vector posicion 1
				vector[i]=vector[j]; // el valor de la posicion 1 se cambiaria a el de la posicion 2 y se borraria el valor de la posicion 1 por lo cual se guardo en aux.
				vector[j]=aux; // la posicion 2 toma el valor de la posicion 1
				
				//los valores mayores se van acomodando en la parte izquierda.
				
				
			}
			
		}
		
		
	}
	
	cout<<"\nVector ordenado de Mayor a Menor"<<endl;
	
	for(i = 1; i <= 15; i++)
	{
		cout<<"Lugar: "<<i<<endl;
		cout<<vector[i]<<endl;
	}
	
	
	
	
	
	
	system("pause");
	
    return 0;
}
