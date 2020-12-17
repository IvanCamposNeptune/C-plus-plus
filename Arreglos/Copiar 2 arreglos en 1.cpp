#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	system("color a");
	
	char letras1[]={'a','b','c','d','e'};
	char letras2[]={'f','g','h','i','j'};
	char letras3[10];
	
	//Copiar los elementos de letras1 a letras3
	for(int i=0; i<5; i++)
	{
		letras3[i]=letras1[i];		
	}
	
		//Copiar los elementos de letras2 a letras3
	for(int i=5; i<10; i++)
	{
		letras3[i]=letras2[i-5];		
	}
	
	//Mostrar elementos del nuevo vector
	
	for(int i=0;i<10;i++)
	{
		cout<<letras3[i]<<endl;
	}
	
	
	
	system("pause");
	return 0;
}
