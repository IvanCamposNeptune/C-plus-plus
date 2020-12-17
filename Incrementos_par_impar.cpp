#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	
	int par=50, impar=50;
	
	for (int c=1, p=2, i=1; c<=3; c++, p+=2, i+=2) // Se hara 3 veces por C= hasta que llegue a 3.  
	{												// p=2 en la primera vuelta valdra 2 terminando valdra 4 y en la tercera 6
										
													//i=1 en la primera vuelta valdra 1 en la segunda sera 3 en la tercera sera 5
													
		par+=p;//50 +2 de la primera +4 de la segunda +6 de la tercera sera 62
		impar+=i;// 50 +1 de la primera +3 de la segunda +5 de la tercera sera 59
		
		cout<<"par= "<<par<<endl;
		cout<<"imparpar= "<<impar<<endl;
	}
	
	cout<<par<<" ,"<<impar<<endl;
	
	getch();

	
	
	return 0;
}
