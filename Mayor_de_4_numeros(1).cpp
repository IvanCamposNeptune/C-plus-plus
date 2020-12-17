#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	double num1, num2, num3, num4, mayor;
	
	cout<<"\tMayor de 4 numeros"<<endl;
	
	cout<<"Digita el primer numero: "; cin>>num1;
	cout<<"Digita el segundo numero: "; cin>>num2;
	cout<<"Digita el tercer numero: "; cin>>num3;
	cout<<"Digita el cuarto numero: "; cin>>num4;
	
	if(num1>num2 && num1>num3 && num1>num4){	
		cout<<"El numero mayor es: "<<num1<<endl;
	}
	else if(num2>num1 && num2>num3 && num2>num4){
		cout<<"El numero mayor es: "<<num2<<endl;
	}
		else if(num3>num1 && num3>num2 && num3>num4){
		cout<<"El numero mayor es: "<<num3<<endl;
	}
	else {
		cout<<"El numero mayor es: "<<num4<<endl;
	}
	
	

		
		
	system("pause");	
	return 0;
		
}
