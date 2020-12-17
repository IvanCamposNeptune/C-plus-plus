#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
 int Alto;
 int Espacios,sEsp = 9;
 int i,a;
 int Num = 1,Repeticiones = 1,GuardaRep;
 
 printf("\n ingrese un numero del 1 al 9: ");
 scanf("%i",&Alto);
 printf("\n ");
 
 for (i=0;i<Alto;i++)
 {
 
 Espacios = sEsp;
 
 while(Espacios!=0){Espacios--; printf(" ");} // Pintamos los huecos en blanco
 
 for (a=0;a<Repeticiones;a++)
 {
 printf("%i",Num+a);
 }
 
 GuardaRep = Repeticiones;
 
 while (Repeticiones!=1){Repeticiones--;printf("%i",Repeticiones);}
 
 Repeticiones = GuardaRep;
 Repeticiones++;
 
 printf("\n");
 sEsp--;
 }
 getch();
 return 0;
}
