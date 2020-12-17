#include <iostream>
#include <windows.h>// para la funcion Sleep


using namespace std;

int main()
{
	system("color a");
	
	bool salida=false;
	
	int num;

	do{					
	
					
		cout<<"Ingrese un numero valido: "<<endl; cin>>num;
			cout<<"Validando .";
			
	for(int i=0; i<9; i++)    // Se hara 10 veces por i=0 hasta que i=10.  
	{
		cout<<".";
		Sleep(100);            // espera 100 milisegundos para imprimir el punto.
	}
	
	cout<<"\n\n";
	
	if(num==10)// el numero valido es 10
	{
		salida=true;
	}			
	
	
    }while(!salida);
	
	return 0;
}
