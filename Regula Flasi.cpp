#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
#include<stdlib.h> 
#include<iostream> 


double f(float X); 

int main(void){ 
int SI=1; 
do{ 
system("cls" ); 
float Xi,Xu,Xr,Xn,Ea,comp; 
int cont=0; 
printf("introduce Xu:\n" ); 
scanf("%f",&Xu); 
printf("introduce Xi:\n" ); 
scanf("%f",&Xi); 
printf("\n Xu Xi Xr f(Xu) f(Xi) f(Xr) \n" ); 
Xr=Xu-((f(Xu)*(Xi-Xu))/(f(Xi)-f(Xu))); 
printf("%.5f %.5f %.5f\n",Xu,Xi,Xr); 

do{ 
comp=f(Xu)*f(Xr); 
if(comp==0) 
printf("La raiz es %f",Xi); 
else 
if(comp<0) 
Xi= Xr; 
else 
Xu= Xr; 

Xn=Xu-((f(Xu)*(Xi-Xu))/(f(Xi)-f(Xu))); 
Ea=((Xn-Xr)/Xn)*100; 
printf("%.5f %.5f %.5f %.5f %.5f %.5f %.5f%\n",Xu,Xi,Xn,f(Xu),f(Xi),f(Xr),Ea); 
Xr=Xn; 

}while(Ea>=1); 
printf("\n\n\n" ); 
printf("DESEAS REALIZAR LA OPERACION OTRA VEZ? SI[1] NO[2]\n" ); 
scanf("%d",&SI); 

}while(SI<=1); 
printf("\n\n\n" ); 

system("PAUSE" ); 
return 0;
} 


double f(float X){ 
return pow(X,4)+3*pow(X,3)-2; 
} 
