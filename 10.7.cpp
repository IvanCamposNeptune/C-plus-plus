#include <iostream>

using namespace std;

/*En 2010 el pai�s A tiene una poblaci�n de 25 millones de habitantes y el pai�s B
de 19.9 millones. Las tasas de crecimiento anual de la poblaci�n son de 2 % y 3 %
respectivamente. Desarrollar un algoritmo para informar en que a�o la poblaci�n del
pai�s B supera a la de A.*/


int main() {

int anio=2010;

double A=25, B=19.9;
	
	for(int i=anio; A>=B ; i++){
		
		A += (A*.2);
		B += (B*.3);
		
		anio=i;
	}
	
	cout<<"En el a�o "<<anio<<" La poblacion B supera a la A en poblacion... "<<"A="<<A<<" B="<<B<<endl;
  
}
