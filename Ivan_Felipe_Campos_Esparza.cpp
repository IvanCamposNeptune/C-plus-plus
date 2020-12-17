#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
#include <string>  

//Use memoria dinamica :c pense que seria cool pero no </3 

struct nodo
  {
  int dato;           
  struct nodo * atras; 
  };
  
int main(){
  	
system("color a");
  char opcion=0;
  struct nodo * frente;
  struct nodo * frenteS;
  struct nodo * ultimoE;
  struct nodo * nuevo;
  struct nodo * auxiliar;
  frente=NULL;   
  printf("\t\t\t\t\tCola");  
  do
    {	
    fflush(stdin); //Limpia el buffer de memoria
    printf("\n\nElige una opcion, Insertar, Sacar, Mostrar, Finalizar (I/S/M/F): ");  
    scanf("%c",&opcion);   
    opcion=toupper(opcion); //Lo hace mayuscula
    switch (opcion)
       {
        case  'I':
      	  nuevo=new struct nodo;	
      	  nuevo->atras=NULL;
          printf("Dame un entero: ");  
          scanf("%i",&nuevo->dato);
    	  if (frente==NULL)	frente=nuevo; 
          else
            {
            auxiliar=frente;
			while (auxiliar->atras!=NULL) auxiliar=auxiliar->atras;
            auxiliar->atras=nuevo;
		    }
          break;  
        case 'S':
        	if (frente==NULL)
              {
              printf("No se pudo sacar, no hay elementos en la cola.\n");
              }
            else 
              {
              printf("Fue sacado el numero: %i\n",frente->dato);  
              auxiliar=frente->atras; 
              delete(frente);  
              frente=auxiliar;	
		      }
            break;  
        case 'M':
    	    auxiliar=frente;
    	    printf("\nContenido de la cola:\n\n");
    	    printf("Frente ");
        	while (auxiliar!=NULL)  
        	  {
    	      printf("%i  ",auxiliar->dato); 
		      auxiliar=auxiliar->atras; 	
		      }
    	    printf("Atras\n");
            break;  
            
			do{				  
				printf("%i  ",auxiliar->dato);           	
				auxiliar=auxiliar->atras;
			}while(auxiliar->atras);			
			printf("%i  ", frente -> dato); 
			printf("Atras\n");
            break;  
						    
        } 
    }
  while (opcion!='F'); 
  printf("\n\nPresione una tecla para continuar...");    
  getchar();
  return 0;
}
