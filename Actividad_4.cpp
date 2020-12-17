#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
  int n, numero, razon, suma=0;
    
  cout<<"\tSucesion Geometrica con la formula general"<<endl; 
  cout<<"Cuantos terminos desea?: "; cin>>n;
    
  cout<<"Digite el primer termino: "; cin>>numero;
  cout<<"Digite la razon: "; cin>>razon;
    	
  suma = ((numero * (pow(razon,n) - 1))/(razon -1)); //Formula general
  	
  
  cout<<"La suma de los primeros "<<n<<" terminos es: "<<suma<<endl;

	return 0;
}
