#include <iostream>
#include <stdlib.h> //para el system("pause"); ,  O  #include <conio.h> para usar el getch();

using namespace std;


int main() {	
	system("color a");
	
	int a=5;
	int *b=&a;
	
	

	cout<<"A: "<<a<<endl;
	cout<<"Direccion de A: "<<&a<<endl;
	
	cout<<"Puntero: "<<b<<endl;
	cout<<"Valor que se le paso a B: "<<*b<<endl;
		
	system("pause");	
	return 0;
		
}
