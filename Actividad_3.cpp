#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int numero1, numero2, diferencia, num, suma=0;
	int s[num];
 
 		cout<<"\tSucesion Aritmetica con la formula de recurrencia"<<endl; 
  		cout<<"Cuantos terminos desea sumar?: "; cin>>num;
    
  		cout<<"Digite el primer termino: "; cin>>numero1;
  		cout<<"Digite el segundo termino: "; cin>>numero2;
  		
  		cout<<"\n";
  		
  		s[0] = numero1;//Primer valor
  		
  		cout<<"a0 = "<<s[0]<<endl;
  		
  		s[1] = numero2;//Segundo valor
  		
		cout<<"a1 = "<<s[1]<<endl; 		
		
		diferencia = s[1] - s[0];//Diferencia
		
    	
    	for(int i=2; i<num; i++){//Empezando en la tercer posicion
    		    		    		
    		s[i] = s[i-1] + diferencia;//Formula de recurrencia
    		
    		
    		cout<<"a"<<i<<" = "<<s[i]<<endl;
    		
    		suma+=s[i];
		}
		
		suma+=(s[0] + s[1]);
		
		cout<<"\nLa suma es: "<<suma<<endl;
 
 
 
 
 
 return 0; 
}


