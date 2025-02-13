/*	~Metodos Numericos Biseccion~

	Ivan Felipe Campos Esparza
	Alexis Islas Monterrubio
	
*/

#include <stdio.h>

#include <conio.h>

#include <math.h>

#include <iostream>
 

void Lee_Datos(void);

double Funcion(double X);

 

double a, b, Error;

int Max_Iter;

 

int main(void)

{
	
	system("color a");

double Error_Aprox, Prod;

double Xr, Xn;

int Ciclos = 0;

 

Lee_Datos();

if(Funcion(a)*Funcion(b)>0)

{

	printf("\n No Existe Raiz en el intervalo ???");

}else

{

	Xr=(a+b)/2;

	printf("\n-----------------------------------------");

	Error_Aprox = 1;

	printf("\n Ciclo	a	b	Xn	Error");

	printf("\n-----------------------------------------");

	printf("\n%3d%10.4f%10.4f%10.4f",Ciclos,a,b,Xr);

 

	while (Ciclos<=Max_Iter && Error<Error_Aprox)

	{

		Prod=Funcion(a)*Funcion(b);

		if (Prod==0)

		{

			printf("La raiz es %lf",Xr);

		}else{

			if(Prod<0)

			{

				b=Xr;

			}else{

				a=Xr;

			}

		}

		Xn=(a+b)/2;

		Ciclos+=1;

		Error_Aprox=fabs((Xn-Xr)/Xn);

		printf("\n%3d%10.4f%10.4f%10.4f",Ciclos,a,b,Xn,Error_Aprox);

		Xr=Xn;

	}

	if(Ciclos<Max_Iter)

	{

		printf("\n--------------------------------------");

		printf("\n\n La Raiz de la Ecuacion es => %lf",Xn);

		printf("\n Se encontro en %d Iteraciones",Ciclos);

	}else{

		printf("\n No se encontro raiz en %d Iteraciones",Ciclos);

	}

}

getch();

return 0;

}

 

void Lee_Datos(void)

{


	printf("\nDar el valor de Xi ..........  ");

	scanf("%lf",&a);

	printf("\nDar el valor de Xf ..........  ");

	scanf("%lf",&b);

	printf("\nCual es el Error Permitido ... ");

	scanf("%lf",&Error);

	printf("\nCual es el Maximo de Ciclos .. ");

	scanf("%d",&Max_Iter);

}

 

double Funcion(double X)

{

	return(pow((1+X),10)-1)/(X*pow((1+X),10))-5;

}




