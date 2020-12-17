#include <stdio.h> //Funciones de entrada-salida estándar
#include <iostream>

struct nodo
  {
  int dato;                  //Dato del nodo
  struct nodo * siguiente;   //Puntero al siguiente nodo, si no existe el siguente, tendrá valor NULL
  };



main()
  {
  	system("color a");
  struct nodo * primero; //Puntero al primer nodo, si este no existe, tendrá valor NULL	
  struct nodo * actual, * auxiliar; //Puntero al nodo actual	
  primero=NULL;	//Por precaución, antes de crear el primer nodo asignamos NULL
  int nuevo_dato=0;
  do
    {	
    printf("Dame un entero (si no hay mas datos escribe -1):");  
    scanf("%i",&nuevo_dato);   
    if (nuevo_dato!=-1)
      {
      if (primero==NULL)	//Si no existe el primer nodo lo crea almacena ahí el nuevo dato
        {
        primero=new struct nodo;
        primero->dato=nuevo_dato;
	    primero->siguiente=NULL;  //NULL en el puntero para indicar que no hay más nodos en la secuencia 
        }
      else //Si ya existen nodos buscar el último desde el primero en adelante
	    {
	    actual=primero;
	    while (actual->siguiente!=NULL) //Buscar hasta llegar al último nodo 
	      actual=actual->siguiente;
        actual->siguiente=new struct nodo;  //Crear nuevo nodo y enlazarlo al anteriór 
	    actual=actual->siguiente;
	    actual->dato=nuevo_dato; //Almacenar el dato en el nodo recien creado 
	    actual->siguiente=NULL;  //NULL en el puntero para indicar que no hay más nodos en la secuencia 
	    }  
	  }
    }
  while (nuevo_dato!=-1);
  
  printf("Los datos que me diste son:\n");  

  actual=primero;
  if (actual!=NULL) //Compueba si hay nodos
    while (actual!=NULL) //Buscar hasta llegar al último nodo 
      {
      printf("%i,\t",actual->dato);  
      actual=actual->siguiente;
      }

  actual=primero;   // Liberar la memoria usada
  if (actual!=NULL) //Compueba si hay nodos
    while (actual!=NULL) //Eliminando hasta llegar al último nodo 
      {
      auxiliar=actual->siguiente;
      delete(actual);
      actual=auxiliar;
      }
  printf("\nLa memoria usada fue liberada");  

	   
  printf("\n\nPresione una tecla para continuar...");    
  getchar(); //Se detiene hasta presionar una tecla
  }
  
  // Modifique el programa para que además de escribir los datos almacenados en el orden en que fueron introducidos 
  // los muestre tambien en orden inverso.
  // Sugerencia: modifique para que sea una lista doblemente enlazada. 
    

