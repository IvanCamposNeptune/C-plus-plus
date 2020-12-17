#include <iostream>

using namespace std;

int main(){
	system("color a");
	
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero%2==0)	
	{
		cout<<"El numero es par"<<endl;
	}
	else
	{
		cout<<"El numero es impar"<<endl;
	}
	
	
	system("pause");
	return 0;
}
