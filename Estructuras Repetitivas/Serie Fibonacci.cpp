#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	system("color a");
	
	int n,x=0,y=1,z=1;
	
	cout<<"Digite el numero de elementos: "; cin>>n;
	
	cout<<"1 ";
	for(int i=1;i<n;i++)
	{
		z= x + y;// 1 2 3 5
		cout<<z<<" ";// 1 2 3 5
		x = y;// x ahora vale 1 de y,  1, 2
		y = z;// y es igual a 1 de z, 2, 3
		
	}
	
	cout<<"\n";
	
	
	system("pause");
	return 0;
}
