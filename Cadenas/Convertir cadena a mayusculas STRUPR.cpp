#include<iostream>
#include<stdlib.h>
#include<string.h>//Para poder usar las cadenas

//Convertir una palabra a mayusculas strupr();

using namespace std;

int main(){
	
	system("color a");
	
	char palabra[] = "ivan campos";
	
	strupr(palabra);
	
	cout<<palabra<<endl;	
	
	
	system("pause");
	return 0;
	
}
