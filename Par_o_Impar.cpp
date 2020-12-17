#include <iostream>
#include "stdio.h"


using namespace std;

int num;

int main() {
	
		cout<<"Introduce un numero: \n";
		cin>>num;
		
		cout<<"El numero "<<num<<" es: "<<((num%2==0)? "Par" : "Impar");
		cin>>num;
		

	
	system("pause");
	
	
	
	return 0;
	
	
	
}
