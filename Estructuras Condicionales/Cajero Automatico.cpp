#include <iostream>

using namespace std;

int main(){
	system("color a");
	
	int saldo_inicial=1000,opc;
	float extra,saldo=0,retiro;
	
	cout<<"\tBienvenido a su Cajero Virtual"; // \t es como un tabulador.
	cout<<"\n1. Ingresar dinero en cuenta"; 
	cout<<"\n2. Retirar dinero de la cuenta"; 
	cout<<"\n3. Salir"; 
	cout<<"\nOpcion: ";
	cin>>opc;
	
	switch(opc)
	{
	case 1:
		cout<<"Digite la cantidad a Ingresar: ";
		cin>>extra;
		saldo=saldo_inicial + extra;
		cout<<"Dinero en cuenta: "<<saldo<<endl;
		break;
	
	case 2:
		cout<<"Digite la cantidad de dinero que desea Retirar: ";
		cin>>retiro;
		
		if(retiro>saldo_inicial)
		{
			cout<<"No tienes suficiente saldo";
		}
		else
		{
			saldo= saldo_inicial - retiro;
			
			cout<<"Dinero en cuenta: "<<saldo<<endl;
			
			break;
		}
		case 3:
			break;
		
	}
	
	
	
	system("pause");
	return 0;
}
