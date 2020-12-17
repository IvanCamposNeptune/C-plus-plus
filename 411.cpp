#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"
#include<string.h>//Para poder usar las cadenas

using namespace std;

void buscar_y_reemplazar(string& frase, string buscar, string rempl){
	int pos=frase.find(buscar);
	if(pos != -1){
		frase.replace(pos,buscar.size(),rempl);
		pos=frase.find(buscar, pos + rempl.size());
	}
}


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	
	
	cout<<"\t\t\tGramatica 1\n"<<endl;
	
	cout<<"Simbolos Terminales {a,b}"<<endl;
	cout<<"Simbolos No Terminales {aSb}"<<endl;
	
	cout<<"\n\nPoducciones ó Reglas"<<endl<<endl;
	
	cout<<"1.  S -> ab"<<endl;
	cout<<"2.  S -> aSb"<<endl;
		
	cout<<"\nDeterminación de Lenguaje\n\n";
	
	//INICIO
	
    string inicio;

	string derecha;

	
	string aux;//donde se guarda la modificacion
	
	string imprimir;
	
	
	//OPCIONES
	
	int opc;
	
	
	//Producciones
	
		cout<<"¿Con cuál producción deseas empezar?: ";
		int pro;
		cin>>pro;
		
		if(pro==1){
			inicio="S";
			derecha="ab";
		}else if(pro==2){
			inicio="S";
			derecha="aSb";
		}else{
			cout<<"No esta dentro de las opciones..."<<endl;
		}
	
		cout<<"\n¿Que regla quieres aplicar? "<<endl;
		cout<<"ó pulsa 0 para salir"<<endl;
		cout<<"1.ab 2.aSb";
	
	
	do{
		fflush(stdin);
	
	
	cout<<"\n\n"<<inicio<<"->"<<derecha<<" :";
	cin>>opc;
		
		switch(opc){
			
			case 0: cout<<"Hasta pronto..."<<endl;
			break;
			
			case 1:
			cout<<"La uno"<<endl;
				
			buscar_y_reemplazar(derecha,"S","ab");//Se modifico la letra (puede ser una regla)
			cout<<inicio<<"->"<<derecha<<endl;//Imprimiendo letra modificada
	
			aux=derecha;//Palabra modificada que cambia la variable global
			
		//	strcat(cad3,cad2);
				
			break;
			
			case 2:
			cout<<"La dos"<<endl;
			buscar_y_reemplazar(derecha,"S","aSb");//Se modifico la letra (puede ser una regla)
			cout<<inicio<<"->"<<derecha<<endl;//Imprimiendo letra modificada
	
			aux=derecha;//Palabra modificada que cambia la variable global
			
			break;
			
			default: cout<<"No esta dentro del rango"<<endl;
			system("pause");
			break;
			
		}
		
	}while(opc!=0);
	
	
	
	
	system("pause");	
	return 0;
		
}
