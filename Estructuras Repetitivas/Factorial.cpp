#include <iostream>
#include <stdlib.h>


//5! = 5*4*3*2*1

using namespace std;

int main(){
	system("color a");
	
	int numero, factorial=1;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	for(int i=1; i<=numero; i++){
		factorial *= i;
	}
	
	cout<<"El factorial del numero "<<numero<<" es: "<<factorial<<endl;
	
	system("pause");
	return 0;
}
