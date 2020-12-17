#include<stdio.h>
#include<stdlib.h>
main(){
	int i, j, n;
	float x[101],y[101],xinterpol,yinterpolada=0;
	float productosNum, productosDen;
	printf("Metodo interpolación\n");
	printf("cuantos puntos seran?\n");
	scanf("%d",&n);
	printf("dame los valores de (x,y) separalos con una coma\n");
	for(i=1;i<=n;i++)
	{
		printf("\n\t punto x(%3d), y(%3d)",i,i);
		scanf("%f,%f",&x[i],&y[i]);
	}
	do{
		printf("\nQue valor vas a evaluar?\n");
		scanf("%f",&xinterpol);
	}while(xinterpol < x[1] && xinterpol > x[n]);
	for(i=1;i<=n;i++){
		productosNum=1;
		productosDen=1;
		for(j=1;j<=n;j++){
			if(i !=j){
				productosNum = productosNum*(xinterpol-x[j]);
				productosDen = productosDen*(x[i]-x[j]);
			}
		}
		yinterpolada = yinterpolada + (productosNum/productosDen)*y[i];
	}
	printf("\n Interpolacion es:  %f",yinterpolada);
	getchar();
  }


