#include <iostream>
#include "stdio.h"


using namespace std;


int main() {	
		
		int i,tabla,mult;
printf(" Tablas de Multiplicar\n");
printf("¿Que tabla deseas realizar?\n");
scanf("%d",&tabla);
for(i=1;i<=10;i++)
{
mult=tabla*i;
printf("%d x %d = %d\n",tabla,i,mult);
}
		
	system("pause");
		
	return 0;
	
	
}




