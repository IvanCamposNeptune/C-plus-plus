#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#define RANDOM(A, B) (rand() % ((B) - (A) + 1) + (A))       

using namespace std;

int main(void)
{
	system("color a");
	
    int i;
	double num;
    
    srand(time(NULL));//para que no se repita.
    
    for(i = 0; i < 15; i++)
    {
	

    num= RANDOM(10*100,100*100) / 100.00; //genera un numero entre el 10 y el 100  multiplicado por 100 y dividivo entre 100 para que de 2 decimas.
    
    printf("%.2f\n", num );// el %.2 limita las decimas a 2.
    
    
		
	
	}
	
	
	
	system("pause");
	
    return 0;
}
