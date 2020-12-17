#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
#include <string>  
struct nodo
  {
  int dato;           
  struct nodo * atras; 
  };
main()
  {
  	system("color a");
  char opcion=0;
  struct nodo * frente;
  struct nodo * frenteS;
  struct nodo * ultimoE;
  struct nodo * nuevo;
  struct nodo * auxiliar;
  frente=NULL;   
  do
    {	
    fflush(stdin); 
    printf("Elige una opcion, Agregar, Sacar, Mostrar, Intercambiar, Finalizar (A/S/M/I/F): ");  
    scanf("%c",&opcion);   
    opcion=toupper(opcion); 
    switch (opcion)
       {
        case  'A':
      	  nuevo=new struct nodo;	
      	  nuevo->atras=NULL;
          printf("Dame un entero: ");  
          scanf("%i",&nuevo->dato);
    	  if (frente==NULL)	frente=nuevo; 
          else
            {
            printf("x");
            auxiliar=frente;
			while (auxiliar->atras!=NULL) auxiliar=auxiliar->atras;
            auxiliar->atras=nuevo;
		    }
          break;  
        case 'S':
        	if (frente==NULL)
              {
              printf("No se pudo sacar, cola vacia.\n");
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
        case 'I':
        	auxiliar = frente;
			printf("\nDatos intercambiados: \n\n");
			printf("Frente ");
			printf("%i  ",nuevo->dato);
			if(frente!=NULL){				
				auxiliar=frente->atras; 
              	frenteS=auxiliar;
				}
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
  printf("\nLa memoria usada fue liberada...\n");
  printf("\n\nPresione una tecla para continuar...");    
  getchar();
}
