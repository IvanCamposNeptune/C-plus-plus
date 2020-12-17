#include <iostream>

	/* 
	Convertir un numero Entero a Romano
	M=1000
	D=500
	C=100
	L=50
	X=10
	V=5
	I=1
	*/

using namespace std;

int main(){
	system("color a");
	
	int numero,unidades,decenas,centenas,millar;
	
	cout<<"Digite un numero: ";
	cin>>numero;	// 2152 -> Dividir entre 2000+100+50+2
	
	//2152
	unidades = numero % 10; //El numero es 2152 el residuo entre 10 es 2 por que se corre una coma a la izquierda. Unidades = 2
	numero /= 10; // Ahora se divide entre 10 para que quede 215
	
	//215
	decenas= numero % 10; //El numero es 215 el residuo entre 10 es 5 por que se corre una coma a la izquierda. Decenas = 5
	numero /= 10; // Ahora se divide entre 10 para que quede 21
	
	//21
	centenas= numero % 10; //El numero es 21 el residuo entre 10 es 1 por que se corre una coma a la izquierda. centenas = 1
	numero /= 10; // Ahora se divide entre 10 para que quede 2
	
	//2
	millar= numero % 10; //El numero es 2 el residuo entre 10 es 2 por que se corre una coma a la izquierda. millares = 2
	numero /= 10; // Ahora se divide entre 10 para que quede 0
	
	switch(millar)
	{
		case 1: cout<<"M"; 
		break;
		case 2: cout<<"MM"; 
		break;
		case 3: cout<<"MMM"; 
		break;
	}
	
	switch(centenas)
	{
		case 1: cout<<"C";
		break;	
		case 2: cout<<"CC";
		break;	
		case 3: cout<<"CCC";
		break;	
		case 4: cout<<"CD";
		break;	
		case 5: cout<<"D";
		break;	
		case 6: cout<<"DC";
		break;	
		case 7: cout<<"DCC";
		break;	
		case 8: cout<<"DCCC";
		break;	
		case 9: cout<<"CM";
		break;	
	}	
	
	switch(decenas)
	{
		case 1: cout<<"X";
		break;
		case 2: cout<<"XX";
		break;
		case 3: cout<<"XXX";
		break;
		case 4: cout<<"XL";
		break;
		case 5: cout<<"L";
		break;
		case 6: cout<<"LX";
		break;
		case 7: cout<<"LXX";
		break;
		case 8: cout<<"LXXX";
		break;
		case 9: cout<<"XC";
		break;
	}
	
	switch(unidades)
	{
		case 1: cout<<"I";
		break;
		case 2: cout<<"II";
		break;
		case 3: cout<<"III";
		break;
		case 4: cout<<"IV";
		break;
		case 5: cout<<"V";
		break;
		case 6: cout<<"VI";
		break;
		case 7: cout<<"VII";
		break;
		case 8: cout<<"VIII";
		break;
		case 9: cout<<"IX";
		break;
		
	}
	
	cout<<"\n";
	

	
	system("pause");
	return 0;
}
