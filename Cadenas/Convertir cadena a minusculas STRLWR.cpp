#include<iostream>
#include<stdlib.h>
#include<string.h>//Para poder usar las cadenas

//Convertir una palabra a minusculas strlwr();

using namespace std;

int main(){
	
	system("color a");
	
	char palabra[] = "IVAN CAMPOS";
	
	strlwr(palabra);
	
	cout<<palabra<<endl;	
	
	
	system("pause");
	return 0;
	
}
