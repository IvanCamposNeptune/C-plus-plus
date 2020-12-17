# include <stdio.h>
# include <conio.h>
#include <iostream>
 
 
FILE *doc;

using namespace std;
 
int main(){
   doc = fopen("parcial3.txt","at");
   printf("ponga los nombres de los jugadores\n");
 
   char jug[15];
   char resp;
   int n = 0;
   do{
   	
   		int nume=69;
   		
   		double nume2=69.69;
   		
  
   	
 
       printf("\nfJugador %d : ",n);
       scanf("%s",jug);
       
	   fprintf(doc,"%c \n","Hola");// para guardar un texto con S  char 1 caracter
	   
	   fprintf(doc,"%s \n","Hola");// para guardar un texto con S  string o imprimir simplemente una palabra  1 cadena
       
    	fprintf(doc,"%d \n",nume);// para guardar un numero con D  int
    	
    	fprintf(doc,"%.2f \n",nume2); //para numeros con decimales F y el .2 limita a 2 decimas. float
    	
    	
    	
    	
       
       n++;
       printf("\nIngresar nuevo jugador? (s/n)");
       resp = getch();
 
    }while( resp == 's' || resp == 'S');
 
    fclose(doc);
    return 0;
}
