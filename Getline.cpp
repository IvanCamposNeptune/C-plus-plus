#include <iostream>
#include "stdio.h"


using namespace std;


int main() {


char nombre [80];
cout<<"Ingresa tu nombre: "<<endl;
cin.getline(nombre,sizeof(nombre)-1);
cout<<"Hola "<<nombre<<" Como estas? Creo que estoy embarazada..."<<endl;


		
	system("pause");
		
	return 0;
	
	
}
