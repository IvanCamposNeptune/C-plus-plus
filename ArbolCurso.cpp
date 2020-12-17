#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"
#include <conio.h>

/*Arboles: Son estructuras de datos dinamicas y no lineales.
Consta de un conjunto finito de elementos denominados "nodos" y un conjunto finito de
lineas dirigidas, denominadas "ramas", que conectan los nodos. */

/*Arbol Binario de Busqueda: Tienen uno o maximo dos hijos, Cuando se insertan datos, los numeros menores se colocan a la izquierda y los mayores a la derecha comparando siempre 
empezando por la raiz.*/


struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
};


Nodo *arbol = NULL; //Siempre se empieza el arbol nulo

//Prototipo de funcion

Nodo *crearNodo(int);

void insertarNodo(Nodo *&arbol,int);

void mostrarArbol(Nodo *,int);

bool busqueda(Nodo *,int);

void preOrden(Nodo *);

void inOrden(Nodo *);

void postOrden(Nodo *);


void menu();



using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	menu();
		
		
	system("pause");	
	return 0;
		
}



//Menu

void menu(){
	int dato,opcion,contador=0;
	
	do{
		cout<<"\tMenu"<<endl;
		cout<<"1.-Insertar nuevo nodo"<<endl;
		cout<<"2.-Mostrar arbol completo"<<endl;
		cout<<"3.-Buscar"<<endl;
		cout<<"4.-Recorrer en PreOrden"<<endl;
		cout<<"5.-Recorrer en InOrden"<<endl;
		cout<<"6.-Recorrer en PostOrden"<<endl;
		cout<<"7.-Salir"<<endl;
		cout<<"Opcion: "; cin>>opcion;
		
		switch(opcion){
			
			case 1: 
			
			cout<<"Digita un numero: "; cin>>dato;
			insertarNodo(arbol,dato);//Insertando un nuevo nodo
			cout<<"\n";
			system("pause");
			break;
			
			case 2: 
			
			cout<<"\nMostrando el arbol completo: \n\n";
			mostrarArbol(arbol,contador);
			
			cout<<"\n";
			system("pause");
			break;
			
			case 3: 
			
			cout<<"Digita el elemento que deseas buscar: ";
			cin>>dato;
			
			if(busqueda(arbol,dato)==true){
				cout<<"El elemento: "<<dato<<" ha sido encontrado";
			}
			else{
				cout<<"No se encontro el elemento";
			}			
			cout<<"\n";
			system("pause");
			break;
			
			case 4:
				
			cout<<"\nRecorrido en preOrden: ";
			preOrden(arbol);
			
			cout<<"\n";
			system("pause");
			break;
			
			case 5:
				
			cout<<"\nRecorrido en inOrden: ";
			inOrden(arbol);
			
			cout<<"\n";
			system("pause");
			break;
			
			
			case 6:
				
			cout<<"\nRecorrido en PostOrden: ";
			postOrden(arbol);
			
			cout<<"\n";
			system("pause");
			break;
			
				
		}
		
		system("cls");	
		
	}while(opcion != 7);
	
	
}


//Creando nuevo nodo

Nodo *crearNodo(int n){
	
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	
	return nuevo_nodo;
	
}

//Insertar 

void insertarNodo(Nodo *&arbol,int n){
	if(arbol==NULL){//Si el arbol esta vacio crea un nuevo nodo y se le asigna n
		Nodo *nuevo_nodo = crearNodo(n);
		arbol=nuevo_nodo;
	}
	else{
		int valorRaiz = arbol->dato;//Se obtiene la raiz que tiene el arbol
		if(n<valorRaiz){//Si el dato que se quiere insertar es menor a la raiz se coloca del lado izquierdo
			insertarNodo(arbol->izq,n);//Se llama la funcion dentro de si misma eso es la recursividad
		}
		else{//Significa que es mayor entonces se va a insertar del lado derecho
			insertarNodo(arbol->der,n);
		}
	}
}

//Mostrar

void mostrarArbol(Nodo *arbol, int cont){
	if(arbol == NULL){//Si el arbol esta vacio
	return;	
	}
	else{
		mostrarArbol(arbol->der,cont+1);//Imrprimir lado derecho con espacios gracias al contador
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;//Se imprimen todos los nodos de la parte derecha
		mostrarArbol(arbol->izq,cont+1);
	}
}

//Buscar

bool busqueda(Nodo *arbol, int n){
	if(arbol==NULL){// Si el arbol esta vacio
		return false;
	}
	else if(arbol->dato==n){// Si el nodo es igual al elemento
		return true;
	}
	else if(n < arbol->dato){//Si esta en los datos menores
		return busqueda(arbol->izq,n);
	}
	else{//Si esta en los mayores
		return busqueda(arbol->der,n);
	}
}

//Recorrido PreOrden
//Primero raiz, luego subarbol izquierdo y luego el derecho.

void preOrden(Nodo *arbol){
	if(arbol==NULL){//Si esta vacio
		return;
	}
	else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}


//Recorrido inOrden
//Primero subarbol izquierdo, luego raiz y luego el derecho.

void inOrden(Nodo *arbol){
	if(arbol==NULL){//Si esta vacio
		return;
	}
	else{
		inOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->der);
	}
}


//Recorrido postOrden
//"Del lado mas izquierdo posible" Primero subarbol izquierdo, luego el derecho "en su parte mas izquierda" y luego raiz.

void postOrden(Nodo *arbol){
	if(arbol==NULL){//Si esta vacio
		return;
	}
	else{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}





