#include <iostream>
#include <cmath>

using namespace std;

//Escriba las funciones o procedimientos aqui

int main() {
  //Reciba los datos
  int cigarros, edad, edadcomienzo, fumando, tiempovida;
  char mano;
  

  //Ejecute las funciones o procedimientos e Imprima el mensaje correspondiente

  cout<<"\nA�os perdidos por el cigarro"<<endl;
  
  cout<<"\nDigita tu edad: "; cin>>edad;
  cout<<"\nDigita la edad a la que empezaste a fumar: "; cin>>edadcomienzo;
  cout<<"\nDigita cuantos cigarrillos fumas por dia: "; cin>>cigarros;
  
  cout<<"\nEscribe (d) si eres diestro, o (z) si eres zurdo: "; cin>>mano;
  
  switch(mano){
    
    case 'd':
    
    fumando = edad-edadcomienzo;
    
    tiempovida = (fumando*525600) - (cigarros*7); //Convierte los a�os fumando a minutos y le resta los 7 minutos que ha perdido por cigarro
    
    tiempovida /=525600; //Convierte de nuevo a a�os
    
    cout<<"\nHas perdido "<<tiempovida<<" a�os..";
    
    break;
    
        case 'z':
    
	edad-=9; //Resta 9 a�os de vida a los zurdos    	
    
    fumando = edad-edadcomienzo;
    
    tiempovida = (fumando*525600) - (cigarros*7); //Convierte los a�os fumando a minutos y le resta los 7 minutos que ha perdido por cigarro
    
    tiempovida /=525600; //Convierte de nuevo a a�os
    
    
    cout<<"\nHas perdido "<<tiempovida<<" a�os..";
    
    break;
    
  }
  
  
}
