#include <iostream>

using namespace std;

	/*
	switch(expresion)
	{

	case literal 1:
	conjunto de instrucciones1;
	break;

	case literal 2:
	conjunto de instrucciones2;
	break;

	case literal n:
	conjunto de instruccionesn;
	break;
	
	default:
	conjunto de instrucciones por defecto;
	break;
	}	 
	*/	



int main(){
	system("color a");
	
	int numero;
	
	cout<<"Digite un numero entre 1-5: ";
	cin>>numero;
	
	switch(numero)
	{
		
	case 1: cout<<"Es el numero 1"<<endl; // en el caso de que numero sea igual a 1 escribe eso.
	break;	
	case 2: cout<<"Es el numero 2"<<endl;
	break;
	case 3: cout<<"Es el numero 3"<<endl;
	break;
	case 4: cout<<"Es el numero 4"<<endl;
	break;
	case 5: cout<<"Es el numero 5"<<endl;
	break;
	
	default: cout<<"El numero no esta dentro del rango 1-5"<<endl;
	break;
	}

	
	
	system("pause");
	return 0;
}
