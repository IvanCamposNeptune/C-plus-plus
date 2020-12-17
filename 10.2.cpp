#include <iostream>

using namespace std;

int main(){
	system("color a");
	
	//Lista de impares
	for(int i=1; i<=999; i++){
		
	if(i%2!=0)	
	{
		cout<<i<<" es impar"<<endl;
	}	
	
	}
	
	//Lista de pares
	for(int i=2; i<=1000; i++){
		
	if(i%2==0)	
	{
		cout<<i<<" es par"<<endl;
	}

	}
	
	
	system("pause");
	return 0;
}
