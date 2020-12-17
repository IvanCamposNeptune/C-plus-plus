/* 
Nombres:
	-Gonzalez Nochebuena Enrique
	-Melo García Alejandro
	-Ramos Mejía Luis Angel
Programa educativo: Software  
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    float x,y,sumx,sum_sqx,sumy,sumxy,a,b;
    printf("\n Numero de datos: ");
    scanf("%d",&n);
    sumx =0;
    sum_sqx =0;
    sumy=0;
    sumxy=0;
     for(i=0;i<n;i++)
   {
   printf("X: ");
   scanf("%f",&x);
   printf("Y: ");
   scanf("%f",&y);
   sumx = sumx +x;
   sum_sqx = sum_sqx + (x*x);
   sumy= sumy + y;
   sumxy = sumxy + (x*y);
   }
    b = (sumxy-(sumx*sumy)/n)/(sum_sqx-(sumx*sumx)/n);
    a = (sumy/n)-(b*sumx/n);
    printf("\nEcuacion lineal: Y= %f + %fX\n",a,b);
    system("pause");
    return 0;
 }

