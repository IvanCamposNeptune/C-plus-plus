#include <iostream>
#include "stdio.h"


using namespace std;


int main() {	
	
	int tabla=0,inicio=0,finals=0,suma=0,contador=0,aux=0;
	
	cout<<"Tabla: "; cin>>tabla;	
	cout<<"Inicio: "; cin>>inicio;
	cout<<"Final: "; cin>>finals;
	
	for( ; inicio <= finals ; inicio++){
	
	suma=0;
	
	for(contador=0; contador != inicio; contador++){
		suma += tabla;
	}
		
		cout<< tabla << "x" << inicio << "=" << suma << endl;
	
	}
		
	system("pause");
		
	return 0;
	
	
}
