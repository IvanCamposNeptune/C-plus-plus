#include <iostream>
#include <stdlib.h> //para el system("pause"); ,  O  #include <conio.h> para usar el getch();

using namespace std;


int main() {	
	system("color a");
	
	cout<<"Operaciones Basicas"<<endl;
	
	int a=6,b=2,c,d;
	
	cout<<"6 + 2 = "<<a+b<<endl;
	cout<<"6 - 2 = "<<a-b<<endl;
	cout<<"6 * 2 = "<<a*b<<endl;
	cout<<"6 / 2 = "<<a/b<<endl;
	
	cout<<"Ingrese la primer variable: ";cin>>c;
	cout<<"Ingrese la segunda variable: ";cin>>d;
	
	cout<<c<<" + "<<d<<" = "<<c+d<<endl;
	cout<<c<<" - "<<d<<" = "<<c-d<<endl;
	cout<<c<<" * "<<d<<" = "<<c*d<<endl;
	cout<<c<<" / "<<d<<" = "<<c/d<<endl;
	
	
		
		
	system("pause");	
	return 0;
		
}
