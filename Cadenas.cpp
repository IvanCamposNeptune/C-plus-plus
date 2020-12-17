#include <stdio.h> 
#include <string.h> 
#include <iostream>
int main()
{
char palabra[50]; 
int i,j,n,k,l,z;

	system("color a");

	printf("Escribe una palabra:"); 
	scanf("%s",&palabra);
		n=strlen(palabra);
		k=1;
		z=1;

	int x=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
			printf("%c",palabra[j]);
			printf("\n");
	}
	for (l=z;l<n;l++)
	{
		for(int p=0; p<=x; p++)
		printf(" ");
		x++;
			for (j=k;j<=i;j++)
			printf("%c",palabra[j]);
			printf("\n");
			k++;
			z++;
	}
	printf("\n\nPresione una tecla para continuar...");
	system("pause");
}
