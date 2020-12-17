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
	
	
	
	cout<<"\t\t\tGramatica 3\n"<<endl;
	
	cout<<"Simbolos Terminales {c}"<<endl;
	cout<<"Simbolos No Terminales {S,A}"<<endl;
	
	cout<<"\n\nPoducciones ó Reglas"<<endl<<endl;
	
	cout<<"S -> L/A"<<endl;
	cout<<"A -> AcA/c"<<endl;
		
	cout<<"\nDeterminación de Lenguaje\n\n";
	
	//INICIO
	
	string inicio3;
	inicio3 = "S";
	
	string derecha3;
	derecha3 = "A";
	
	string aux3;//donde se guarda la modificacion
	
	
	//OPCIONES
	
	int opc;
	
	do{
		fflush(stdin);
		
	cout<<"S->L"<<endl;
	
	cout<<inicio3<<"->"<<derecha3<<endl;	
		
		cout<<"\n¿Que regla quieres aplicar? "<<endl;
		cout<<"ó pulsa 0 para salir"<<endl;
		cout<<"1.AcA 2.c : ";
		
		cin>>opc;
		
		switch(opc){
			
			case 0: cout<<"Hasta pronto..."<<endl;
			break;
			
			case 1:
			cout<<"La uno"<<endl;
				
			buscar_y_reemplazar(derecha3,"A","AcA");//Se modifico la letra (puede ser una regla)
			cout<<inicio3<<"->"<<derecha3<<endl;//Imprimiendo letra modificada
	
			aux3=derecha3;//Palabra modificada que cambia la variable global
				
			system("pause");
			break;
			
			case 2:
			cout<<"La dos"<<endl;
			buscar_y_reemplazar(derecha3,"A","c");//Se modifico la letra (puede ser una regla)
			cout<<inicio3<<"->"<<derecha3<<endl;//Imprimiendo letra modificada
	
			aux3=derecha3;//Palabra modificada que cambia la variable global
			
			system("pause");
			break;
			
			default: cout<<"No esta dentro del rango"<<endl;
			system("pause");
			break;
			
		}
		system("cls");
		
	}while(opc!=0);
	
	
	
	
	system("pause");	
	return 0;
		
}
