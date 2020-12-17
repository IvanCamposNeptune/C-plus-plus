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
	
	//Gramatica
	
	int numero;//Cual gramatica
	
	
	//INICIO GRAMATICA 1
	
	string inicio;
	inicio = "S";
	
	string derecha;
	derecha = "A";
	
	string aux;//donde se guarda la modificacion
	
	//INICIO GRAMATICA 2
	
	string inicio2;
	inicio2 = "S";
	
	string derecha2;
	derecha2 = "A";
	
	string aux2;//donde se guarda la modificacion
	
	//INICIO GRAMATICA 3
	
	string inicio3;
	inicio3 = "S";
	
	string derecha3;
	derecha3 = "A";
	
	string aux3;//donde se guarda la modificacion
	
	//INICIO GRAMATICA 4
	
	string inicio4;
	inicio4 = "S";
	
	string derecha4;
	derecha4 = "cA";
	
	string aux4;//donde se guarda la modificacion
	
	//INICIO GRAMATICA 5
	
	string inicio5;
	inicio5 = "S";
	
	string derecha5;
	derecha5 = "A";
	
	string aux5;//donde se guarda la modificacion
	
	
	
	
	
	
	
	do{
	fflush(stdin);//Limpia buffer de memoria
	system("cls");
	
	cout<<"\tGramaticas"<<endl;
	cout<<"¿Que gramática quieres hacer? (1-5)\nó pulsa 0 para salir: ";
	cin>>numero;
	
	cout<<"\n\n\n";
	
	switch(numero)
	{
	case 0: cout<<"Hasta pronto..."<<endl;
	break;
		
	case 1: 
	cout<<"\t\t\tGramatica 1\n"<<endl;
	
	cout<<"Simbolos Terminales {c}"<<endl;
	cout<<"Simbolos No Terminales {S,A}"<<endl;
	
	cout<<"\n\nPoducciones ó Reglas"<<endl<<endl;
	
	cout<<"S -> L/A"<<endl;
	cout<<"A -> AA/C"<<endl;
		
	cout<<"\nDeterminación de Lenguaje\n\n";
	
		//OPCIONES
	
	int opc;
	
	do{
		fflush(stdin);
		
	cout<<"S->L"<<endl;
	
	cout<<inicio<<"->"<<derecha<<endl;	
		
		cout<<"\n¿Que regla quieres aplicar? "<<endl;
		cout<<"ó pulsa 0 para salir"<<endl;
		cout<<"1.AA 2.c : ";
		
		cin>>opc;
		
		switch(opc){
			
			case 0: cout<<"Hasta pronto..."<<endl;
			break;
			
			case 1:
			cout<<"La uno"<<endl;
				
			buscar_y_reemplazar(derecha,"A","AA");//Se modifico la letra (puede ser una regla)
			cout<<inicio<<"->"<<derecha<<endl;//Imprimiendo letra modificada
	
			aux=derecha;//Palabra modificada que cambia la variable global
				
			system("pause");
			break;
			
			case 2:
			cout<<"La dos"<<endl;
			buscar_y_reemplazar(derecha,"A","c");//Se modifico la letra (puede ser una regla)
			cout<<inicio<<"->"<<derecha<<endl;//Imprimiendo letra modificada
	
			aux=derecha;//Palabra modificada que cambia la variable global
			
			system("pause");
			break;
			
			default: cout<<"No esta dentro del rango"<<endl;
			system("pause");
			break;
			
		}
		system("cls");
		
	}while(opc!=0);
	

	
	system("pause");
	break;
		
	case 2: 
	cout<<"\t\t\tGramatica 2\n"<<endl;
	
	cout<<"Simbolos Terminales {c,d}"<<endl;
	cout<<"Simbolos No Terminales {S,A}"<<endl;
	
	cout<<"\n\nPoducciones ó Reglas"<<endl<<endl;
	
	cout<<"S -> L/A"<<endl;
	cout<<"A -> cAd/cd"<<endl;
		
	cout<<"\nDeterminación de Lenguaje\n\n";
	
	
	//OPCIONES
	
	
	do{
		fflush(stdin);
		
	cout<<"S->L"<<endl;
	
	cout<<inicio2<<"->"<<derecha2<<endl;	
		
		cout<<"\n¿Que regla quieres aplicar? "<<endl;
		cout<<"ó pulsa 0 para salir"<<endl;
		cout<<"1.cAd 2.cd : ";
		
		cin>>opc;
		
		switch(opc){
			
			case 0: cout<<"Hasta pronto..."<<endl;
			break;
			
			case 1:
			cout<<"La uno"<<endl;
				
			buscar_y_reemplazar(derecha2,"A","cAd");//Se modifico la letra (puede ser una regla)
			cout<<inicio2<<"->"<<derecha2<<endl;//Imprimiendo letra modificada
	
			aux2=derecha2;//Palabra modificada que cambia la variable global
				
			system("pause");
			break;
			
			case 2:
			cout<<"La dos"<<endl;
			buscar_y_reemplazar(derecha2,"A","cd");//Se modifico la letra (puede ser una regla)
			cout<<inicio2<<"->"<<derecha2<<endl;//Imprimiendo letra modificada
	
			aux2=derecha2;//Palabra modificada que cambia la variable global
			
			system("pause");
			break;
			
			default: cout<<"No esta dentro del rango"<<endl;
			system("pause");
			break;
			
		}
		system("cls");
		
	}while(opc!=0);
	system("pause");
	break;
	
	case 3:
	
	cout<<"\t\t\tGramatica 3\n"<<endl;
	
	cout<<"Simbolos Terminales {c}"<<endl;
	cout<<"Simbolos No Terminales {S,A}"<<endl;
	
	cout<<"\n\nPoducciones ó Reglas"<<endl<<endl;
	
	cout<<"S -> L/A"<<endl;
	cout<<"A -> AcA/c"<<endl;
		
	cout<<"\nDeterminación de Lenguaje\n\n";
	
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
	break;
	
	case 4: 
	
	cout<<"\t\t\tGramatica 4\n"<<endl;
	
	cout<<"Simbolos Terminales {c,d}"<<endl;
	cout<<"Simbolos No Terminales {S,A,T}"<<endl;
	
	cout<<"\n\nPoducciones ó Reglas"<<endl<<endl;
	
	cout<<"S -> cA"<<endl;
	cout<<"A -> d/cA/Td"<<endl;
	cout<<"T -> Tc/d"<<endl;
		
	cout<<"\nDeterminación de Lenguaje\n\n";
	
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
	break;
	
	case 5: 
	
	cout<<"\t\t\tGramatica 5\n"<<endl;
	
	cout<<"Simbolos Terminales {c,d}"<<endl;
	cout<<"Simbolos No Terminales {S,A}"<<endl;
	
	cout<<"\n\nPoducciones ó Reglas"<<endl<<endl;
	
	cout<<"S -> L/A"<<endl;
	cout<<"A -> Ad/cA/c/d"<<endl;
		
	cout<<"\nDeterminación de Lenguaje\n\n";
	
	do{
		fflush(stdin);
		
	cout<<"S->L"<<endl;
	
	cout<<inicio5<<"->"<<derecha5<<endl;	
		
		cout<<"\n¿Que regla quieres aplicar? "<<endl;
		cout<<"ó pulsa 0 para salir"<<endl;
		cout<<"1.Ad 2.cA 3.c 4.d : ";
		
		cin>>opc;
		
		switch(opc){
			
			case 0: cout<<"Hasta pronto..."<<endl;
			break;
			
			case 1:
			cout<<"La uno"<<endl;
				
			buscar_y_reemplazar(derecha5,"A","Ad");//Se modifico la letra (puede ser una regla)
			cout<<inicio5<<"->"<<derecha5<<endl;//Imprimiendo letra modificada
	
			aux5=derecha5;//Palabra modificada que cambia la variable global
				
			system("pause");
			break;
			
			case 2:
			cout<<"La dos"<<endl;
			buscar_y_reemplazar(derecha5,"A","cA");//Se modifico la letra (puede ser una regla)
			cout<<inicio5<<"->"<<derecha5<<endl;//Imprimiendo letra modificada
	
			aux5=derecha5;//Palabra modificada que cambia la variable global
			
			system("pause");
			break;
			
			case 3:
			cout<<"La tres"<<endl;
			buscar_y_reemplazar(derecha5,"A","c");//Se modifico la letra (puede ser una regla)
			cout<<inicio5<<"->"<<derecha5<<endl;//Imprimiendo letra modificada
	
			aux5=derecha5;//Palabra modificada que cambia la variable global
			
			system("pause");
			break;
			
			case 4:
			cout<<"La cuatro"<<endl;
			buscar_y_reemplazar(derecha5,"A","d");//Se modifico la letra (puede ser una regla)
			cout<<inicio5<<"->"<<derecha5<<endl;//Imprimiendo letra modificada
	
			aux5=derecha5;//Palabra modificada que cambia la variable global
			
			system("pause");
			break;
			
			default: cout<<"No esta dentro del rango"<<endl;
			system("pause");
			break;
			
		}
		system("cls");
		
	}while(opc!=0);
	system("pause");
	break;
	
	default: cout<<"El número no está dentro del rango (1-5)"<<endl;
	system("pause");
	break;
	
	system("cls");
	
	}
	
}while(numero!=0);
	
		
	system("pause");
	return 0;
		
}
