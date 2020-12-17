#include <iostream>
#include "stdio.h"


using namespace std;

char c;

int main() {
	
	cout<<"Introduce una letra: ";
	cin>>c;
	
	c=toupper(c);
	
	
	if(c>='A'&&c<='Z'){
	
		cout<<"Ud ha ingresado una letra"<<endl;
		
			}
		
	else
	{
	 cout<<"Usted no ha ingresado una letra";
	}	
	
	system("pause");
	
	
	
	return 0;
	
	
	
}
