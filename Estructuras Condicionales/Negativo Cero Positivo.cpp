#include <iostream>

using namespace std;

int main(){
	system("color a");
	
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero == 0)
	{
		cout<<"El numero es cero"<<endl;		
	}	
	else if(numero > 0)
	{
		cout<<"el numero es positivo"<<endl;
	}
	else
	{
		cout<<"El numero es negativo"<<endl;
	}
	
	system("pause");
	return 0;
}
