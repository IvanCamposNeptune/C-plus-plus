#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	system("color a");
	
	int matriz1[2][2]={{1,2},{3,4}};
	int matriz2[2][2];
	
	//Pasando el contenido de matriz1 a matriz2
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			matriz2[i][j]=matriz1[i][j];
		}
	}
	
	cout<<"Mostrando la matiz2: \n" ;
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
			
			cout<<matriz2[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	
	
	
	system("pause");
	return 0;
	
}
