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
	
	
	
	cout<<"\t\t\tGramatica 4\n"<<endl;
	
	cout<<"Simbolos Terminales {c,d}"<<endl;
	cout<<"Simbolos No Terminales {S,A,T}"<<endl;
	
	cout<<"\n\nPoducciones ó Reglas"<<endl<<endl;
	
	cout<<"S -> cA"<<endl;
	cout<<"A -> d/cA/Td"<<endl;
	cout<<"T -> Tc/d"<<endl;
		
	cout<<"\nDeterminación de Lenguaje\n\n";
	
	//INICIO
	
	string inicio4;
	inicio4 = "S";
	
	string derecha4;
	derecha4 = "cA";
	
	string aux4;//donde se guarda la modificacion
	
	
	//OPCIONES
	
	int opc;
	
	do{
		fflush(stdin);
		
	//cout<<"S->L"<<endl;
	
	cout<<inicio4<<"->"<<derecha4<<endl;	
		
		cout<<"\n¿Que regla quieres aplicar? "<<endl;
		cout<<"ó pulsa 0 para salir"<<endl;
		cout<<"(A) 1.d 2.cA 3.Td\n(T) 4.Tc 5.d: ";
		
		cin>>opc;
		
		switch(opc){
			
			case 0: cout<<"Hasta pronto..."<<endl;
			break;
			
			case 1:
			cout<<"La uno"<<endl;
				
			buscar_y_reemplazar(derecha4,"A","d");//Se modifico la letra (puede ser una regla)
			cout<<inicio4<<"->"<<derecha4<<endl;//Imprimiendo letra modificada
	
			aux4=derecha4;//Palabra modificada que cambia la variable global
				
			system("pause");
			break;
			
			case 2:
			cout<<"La dos"<<endl;
			buscar_y_reemplazar(derecha4,"A","cA");//Se modifico la letra (puede ser una regla)
			cout<<inicio4<<"->"<<derecha4<<endl;//Imprimiendo letra modificada
	
			aux4=derecha4;//Palabra modificada que cambia la variable global
			
			system("pause");
			break;
			
			case 3:
			cout<<"La tres"<<endl;
			buscar_y_reemplazar(derecha4,"A","Td");//Se modifico la letra (puede ser una regla)
			cout<<inicio4<<"->"<<derecha4<<endl;//Imprimiendo letra modificada
	
			aux4=derecha4;//Palabra modificada que cambia la variable global
			
			system("pause");
			break;
			
			case 4:
			cout<<"La cuatro"<<endl;
			buscar_y_reemplazar(derecha4,"T","Tc");//Se modifico la letra (puede ser una regla)
			cout<<inicio4<<"->"<<derecha4<<endl;//Imprimiendo letra modificada
	
			aux4=derecha4;//Palabra modificada que cambia la variable global
			
			system("pause");
			break;
			
			case 5:
			cout<<"La cinco"<<endl;
			buscar_y_reemplazar(derecha4,"T","d");//Se modifico la letra (puede ser una regla)
			cout<<inicio4<<"->"<<derecha4<<endl;//Imprimiendo letra modificada
	
			aux4=derecha4;//Palabra modificada que cambia la variable global
			
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
