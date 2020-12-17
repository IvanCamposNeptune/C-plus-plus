#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();

using namespace std;

int elevado(int x); //Prototipo

int main() {	
	system("color a");
		cout<<elevado(5)<<endl;//Llamada
		
	system("pause");	
	return 0;
		
}

int elevado(int x){//Definicion
	x = x*x;
	return(x);
}
