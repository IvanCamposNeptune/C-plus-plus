#include <iostream>

using namespace std;

int main(){
	system("color a");
	
	int n1,n2,n3;
	
		cout<<"Digite el primer numero: ";
	cin>>n1;
		cout<<"\nDigite el segundo numero: ";
	cin>>n2;
		cout<<"\nDigite el tercer numero: ";
	cin>>n3;
	
	if((n1>=n2) && (n1>=n3))
	{
		cout<<"\nEl mayor es: "<<n1<<endl;
	}
	else if((n2>=n1) && (n2>=n3)) //Se puede poner || que significa "O" osea que si uno de los dos es verdadero el resultado es verdadero.
	{
		cout<<"\nEl mayor es: "<<n2<<endl;
	}
	else
	{
		cout<<"\nEl mayor es: "<<n3<<endl;
	}
	
	
	system("pause");
	return 0;
}
