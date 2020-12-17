#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	system("color a");
	
	int numero=1;
	
	for(int i=1; i<=9; i++){
		
	for(int j=0; j<=10; j++){
		
		cout<<numero<<" * "<<j<<" = "<<numero*j<<endl;
	
	}
	
	cout<<"\n\n";
	
	numero++;
		
	}
		
	system("pause");
	return 0;
}
