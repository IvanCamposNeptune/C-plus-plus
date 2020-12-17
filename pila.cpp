#include <stdio.h> //Funciones de entrada-salida estándar
#include <string>  //Incluye la función toupper() para convertir a mayúsculas

struct nodo
  {
  int dato; 
                //Dato del nodo
  struct nodo * debajo;   //Puntero al nodo que está debajo, si no existe, tendrá valor NULL
  };

main()
  {
  	system("color a");
  	int cont=0,num;
  char opcion=0;
  struct nodo * cima; //Puntero al nodo en la cima de la pila
  struct nodo * auxiliar; //Puntero para operaciones
  
  cima=NULL;        //Por precaución, antes de crear el primer nodo asignamos NULL
  
  do
    {	
    fflush(stdin); //Limpia el bufer de entrada
    printf("\nElige una opcion, Agregar, Sacar, Mostrar, Finalizar (A/S/M/F):");  
    scanf("%c",&opcion);   
    opcion=toupper(opcion); //Convierte el carácter opción a mayúscula para que sea indistinto 'A' y 'a' por ejemplo
    switch (opcion)
       {
        case  'A':
        	
      	  auxiliar=new struct nodo;	//Crea nuevo nodo
      	  auxiliar->debajo=NULL;
          printf("Dame un entero:");  
          scanf("%i",&auxiliar->dato);
          cont=cont+1;
          if(cont==1){
          	num=auxiliar->dato;
		  }
    	  if (cima==NULL)	cima=auxiliar; //Si es el primer nodo coloca la cima apuntando hacia él
    	  
          else  //Si no es el primer nodo desplaza la cima un nivel hacia arriba
            {
            auxiliar->debajo=cima;
            cima=auxiliar;	
		    }
          break;  
		
        case 'S':
        	if (cima==NULL)	//Si no existen nodos no se puede sacar
              {
              printf("No se pudo sacar, pila vacia.\n");
              }
            else 
              {
              printf("Fue sacado el numero:%i\n",cima->dato);  
              auxiliar=cima->debajo; //Al sacar un elemento, la cima se mueve un lugar hacia abajo
              delete(cima);  //Liberar el nodo que se deja de usar
              cima=auxiliar;
			  cont=cont-1;	
		      }
            break;  
		
        case 'M':
    	    auxiliar=cima;
    	    printf("Contenido de la pila:\n");
        	while (auxiliar!=NULL)  //Recorre la pila desde la cima hasta el fondo
        	  {
    	      printf("%i\n",auxiliar->dato); 
		      auxiliar=auxiliar->debajo; 	
		      }
		      
		      if(cont==0){
		      	printf("\nNo hay datos");
			  }else if(cont==1){
			  	printf("\nSolo hay 1 elemento");
			  }
			  else{
			  	printf("\nHay %i",cont);
		      printf(" Elementos en la pila");
		      printf("\nEn la cima: %i",cima->dato);
		      printf("\nEn el fondo: %i",num);
			  }
            break;  
        
        } //Termina switch
         
    }
  while (opcion!='F'); //Fin del ciclo do-while
        auxiliar=NULL;
            	cima=NULL;
            	cont=0;
				num=0;
                 opcion=NULL;       
  printf("\n\nPresione una tecla para continuar...");    
  getchar(); //Se detiene hasta presionar una tecla
  }
  
  
  // Modifique el programa para que con la opción de mostrar, además de escribir los datos almacenados en la pila 
  // indique cuantos elementos hay, que dato está en la cima y que dato está en el fondo.
  // La salida con la opción mostrar debe verse similar a esto:
  //
  // Contenido de la pila:
  // 62
  // 27
  // 5
  // 8
  // 93
  // Hay 5 elementos en la pila.
  // En la cima: 62
  // En el fondo: 93
  //
  // Implemente la parte que cuando el usuario elige finalizar libere la memoria 
  // que estuviera en uso.
  
