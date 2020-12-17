#include <iostream>

using namespace std;


int main() {	

        
    cout<<"\tMeses del año"<<endl;
    int mes, dia;

    cout<<"Digite el numero del mes: "<<endl;
    cin>>mes;
    
    switch(mes)
    {
              case 1:
                   cout<<"¿Cual es tu dia de nacimiento?: "<<endl;
                   cin>>dia;
                   if(dia>=1 && dia<=19){
                    cout<<"Tu signo zodiacal es CAPRICORNIO"<<endl;
                   }
                   else
                   if(dia>=20 && dia<=31){
                    cout<<"Tu signo zodiacal es ACUARIO"<<endl;
                   } 
                   break;
              case 2:
                    cout<<"¿Cual es tu dia de nacimiento?: "<<endl;
                        cin>>dia;
                        if(dia>=1 && dia<=18){
                    cout<<"Tu signo zodiacal es ACUARIO"<<endl;
                   }
                   else
                   if(dia>=19 && dia<=29){
                    cout<<"Tu signo zodiacal es PISCIS"<<endl;
                   }

                    break;
              case 3:
                    cout<<"¿Cual es tu dia de nacimiento?: "<<endl;
                        cin>>dia;
                        if(dia>=1 && dia<=20){
                    cout<<"Tu signo zodiacal es PISCIS"<<endl;
                   }
                   else
                   if(dia>=21 && dia<=31){
                    cout<<"Tu signo zodiacal es ARIES"<<endl;
                   }
                        break;
              case 4:
                  cout<<"¿Cual es tu dia de nacimiento?: "<<endl;
                        cin>>dia;
                        if(dia>=1 && dia<=20){
                  cout<<"Tu signo zodiacal es ARIES"<<endl;
                   }
                   else
                   if(dia>=21 && dia<=31){
                  cout<<"Tu signo zodiacal es TAURO"<<endl;
                   }
                        break;
              case 5:
                  cout<<"¿Cual es tu dia de nacimiento?: "<<endl;
                        cin>>dia;
                        if(dia>=1 && dia<=20){
                  cout<<"Tu signo zodiacal es TAURO"<<endl;
                   }
                   else
                   if(dia>=21 && dia<=31){
                  cout<<"Tu signo zodiacal es GEMINIS"<<endl;
                   }
                        break;
              case 6:
                  cout<<"¿Cual es tu dia de nacimiento?: "<<endl;
                       cin>>dia;
                       if(dia>=1 && dia<=20){
                  cout<<"Tu signo zodiacal es GEMINIS"<<endl;
                   }
                   else
                   if(dia>=21 && dia<=31){
                 cout<<"Tu signo zodiacal es CANCER"<<endl;
                   }
                        break;
              case 7:
                  cout<<"¿Cual es tu dia de nacimiento?: "<<endl;
                        cin>>dia;
                        if(dia>=1 && dia<=20){
                  cout<<"Tu signo zodiacal es CANCER"<<endl;
                   }
                   else
                   if(dia>=21 && dia<=31){
                  cout<<"Tu signo zodiacal es LEO"<<endl;
                   }
                        break;
              case 8:
                  cout<<"¿Cual es tu dia de nacimiento?: "<<endl;
                        cin>>dia;
                        if(dia>=1 && dia<=21){
                  cout<<"Tu signo zodiacal es LEO"<<endl;
                   }
                   else
                   if(dia>=22 && dia<=31){
                 cout<<"Tu signo zodiacal es VIRGO"<<endl;
                   }
                        break;
              case 9:
                  cout<<"¿Cual es tu dia de nacimiento?: "<<endl;
                        cin>>dia;
                        if(dia>=1 && dia<=22){
                  cout<<"Tu signo zodiacal es VIRGO"<<endl;
                   }
                   else
                   if(dia>=23 && dia<=30){
                  cout<<"Tu signo zodiacal es LIBRA"<<endl;
                   }
                        break;
              case 10:
                  cout<<"¿Cual es tu dia de nacimiento?: "<<endl;
                        cin>>dia;
                        if(dia>=1 && dia<=22){
                  cout<<"Tu signo zodiacal es LIBRA"<<endl;
                   }
                   else
                   if(dia>=23 && dia<=31){
                  cout<<"Tu signo zodiacal es ESCORPIO"<<endl;
                   }
                        break;
              case 11:
                  cout<<"¿Cual es tu dia de nacimiento?: "<<endl;
                        cin>>dia;
                        if(dia>=1 && dia<=22){
                  cout<<"Tu signo zodiacal es ESCORPIO"<<endl;
                   }
                   else
                   if(dia>=23 && dia<=30){
                  cout<<"Tu signo zodiacal es SAGITARIO"<<endl;
                   }
                        break;
              case 12:
                  cout<<"¿Cual es tu dia de nacimiento?: "<<endl;
                        cin>>dia;
                        if(dia>=1 && dia<=20){
                  cout<<"Tu signo zodiacal es SAGITARIO"<<endl;
                   }
                   else
                   if(dia>=21 && dia<=31){
                  cout<<"Tu signo zodiacal es CAPRICORNIO"<<endl;
                   }
                        break;
                
              default:
                  cout<<"Numero de mes no valido"<<endl;
                        break;
                        }
		
		
	system("pause");	
	return 0;
		
}
