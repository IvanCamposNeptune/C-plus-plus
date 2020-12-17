#include<conio.h> 
#include<math.h> 
#include<stdlib.h> 
#include<stdio.h> 
#include<iostream> 

double f(float Xi); 
double f1(float Xr); 

int main(void){ 
 
system("cls" ); 
float Xi=0,Ea=0,Xz=0,Xr=0; 
int cont=0;
printf("INTRODUCE Xi:\n" ); 
scanf("%f",&Xi); 
printf("\n\n      Xi-1        Xi      Xi+1      f(Xi-1)     f(Xi)      Ea\n" ); 

do{ 
Xr=(Xi-1); 
Xz= Xi-((f(Xi)*(Xr-Xi))/(f1(Xr)-f(Xi))); 
Ea=fabs((Xz-Xi)/Xz)*100; 
printf("%d   %f   %.5f   %.5f   %.5f   %.5f   %f\n",cont,Xr,Xi,Xz,f1(Xr),f(Xi),Ea); 
cont++; 
Xi=Xz; 
}while(Ea>=0.05); 
printf("\n\n\n" );
 
system("PAUSE" ); 
} 

double f(float Xi){ 
return (exp(-Xi))-Xi; 
} 


double f1(float Xr){ 
float n = (exp(-Xr))-Xr; 
return n; 
} 
