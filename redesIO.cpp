#include <stdlib.h>
#include <stdio.h>
#define MAX 10 
#define RESTRICCIONES 3
double funcion[MAX], restricciones[MAX + 1][MAX + RESTRICCIONES];
double indepndiente[RESTRICCIONES];

int Datos(int *variables)
{
	int rest, x, i;

	printf("Funcion a Optimizar \nNumero de Variables: ");
	scanf("%d", variables);

	for (x = 0; x<*variables; x++)
	{
		printf("\n x%d: ", x + 1);
		scanf("%lf", &funcion[x]);
	}

	printf("\nNumero de Restricciones: ");
	scanf("%d", &rest);
	return rest;
}


int main(void)
{
	system("color a");
	int rest, var, ni;
	int i, j, k, coumna, renglon, count, cuenta;
	double maximo = 0, menor, aux, mult, temp;
	rest = Datos(&var);
	for (i = 0; i<rest; i++)
		for (j = 0; j<rest; j++)
			if (i == j)
				restricciones[i][var + j] = 1;
			else
				restricciones[i][var + j] = 0;
	for (i = 0; i<rest; i++)
		restricciones[i][var + rest] = indepndiente[i];

	for (j = 0; j<var; j++)
		restricciones[rest][j] = funcion[j] * -1;
	for (j = var; j<rest + var; j++)
		restricciones[rest][j] = 0;
	ni = 1;
	printf("\n-----------------------------------------------");
	printf("\n D%d", ni);
	printf("\n-----------------------------------------------\n");
	ni++;
	for (i = 0; i <= rest; i++) 
{
		for (j = 0; j <= rest + var; j++)
			printf(" %.2lf \t", restricciones[i][j]);
		printf("\n");
}
	do
	{
		
		maximo = abs(long(restricciones[rest][0]));
		coumna = 0;
		for (j = 0; j <= rest + var; j++)
		{
			if (restricciones[rest][j] < 0)
			{
				temp = -1 * restricciones[rest][j];
				if (maximo < temp)
				{
					maximo = temp;
					coumna = j;
				}
			}
			else
				continue;
		}
		count = 0;
		aux = 1e20;
		menor = 1e20;
		for (i = 0; i<rest; i++) {

			if (restricciones[i][coumna] > 0)
				aux = restricciones[i][rest + var] / restricciones[i][coumna];
			else
				count++;
			if (menor > aux) {
				menor = aux;
				renglon = i;
			}
		}
		if (count == rest) {
			printf("S1");
			exit(1);
		}
		printf("\nPivote: %.2lf, renglon %d columna %d", restricciones[renglon][coumna], renglon, coumna);
			aux = restricciones[renglon][coumna];
		for (j = 0; j <= (rest + var); j++)
			restricciones[renglon][j] = restricciones[renglon][j] / aux;


		for (i = 0; i <= rest; i++) {
			if (i == renglon)
				continue;
			else {
				aux = restricciones[i][coumna] * -1;
				for (k = 0; k <= rest + var; k++) {
					restricciones[i][k] = (aux * restricciones[renglon][k]) +
						restricciones[i][k];
				}
			}

		}
		printf("\n-----------------------------------------------");
		printf("\n S%d", ni);
		printf("\n-----------------------------------------------\n");
		ni++;
		for (i = 0; i <= rest; i++) {
			for (j = 0; j <= rest + var; j++)
				printf(" %.2lf \t", restricciones[i][j]);
			printf("\n");
		}
		cuenta = 0;
		for (j = 0; j<rest + var; j++)
			if (restricciones[rest][j] >= 0)
				cuenta++;
		if (cuenta == rest + var)
			break;
	} while (cuenta);

	printf("---->");

	system("Pause");
	return 0;
}
