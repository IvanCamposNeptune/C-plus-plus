#include <iostream> 
using namespace std; 

int main () 
{ 
	int x;
	
	float num1,num2,division,multiplicacion;
	
	cout << "Programa para ordenar de manera ascendente o descendente de 3 numeros \n";
	
    float n1, n2, n3, mayor, menor, medio; 
    cout << "Ingrese el primer numero : "; 
    cin >> n1; 
    cout << "Ingrese el segundo numero : "; 
    cin >> n2; 
    cout << "Ingrese el tercer numero : "; 
    cin >> n3; 

    if (n1>n2 && n1>n3) 
        mayor = n1; 
    else 
    if (n2>n3) 
        mayor = n2; 
    else 
        mayor = n3; 

    if (n1<n2 && n1<n3) 
        menor = n1; 
    else 
    if (n2<n3) 
    menor = n2; 
    else 
        menor = n3; 

    if (n1 != mayor && n1 != menor) 
    medio = n1; 
    else 
    if (n2 != n3) 
        medio = n2; 
    else 
        medio = n3; 
 
	

    	cout<<"Quieres ordenarlos de manera ascendente oprime 1 "<<endl;
		cout<<"Quieres ordenarlos de manera descendente oprime 2 "<<endl;
	
		cin>>x;
	
		if(n1==n2&&n3)
    	cout<<"Los 3 numeros son iguales"<<endl;
    	else
		if(n1==n2)
    	cout<<"numero 1 y numero 2 son iguales"<<endl;
    	else
    	if(n1==n3)
    	cout<<"numero 1 y numero 3 son iguales"<<endl;
    	else
    	if(n2==n3)
    	cout<<"numero 2 y numero 3 son iguales"<<endl;
    	
    
		
	
	
		if(x==1){
		
		cout << "Menor: " << menor<< "\n" << "Medio: "<< medio << "\n"<< "Mayor: " << mayor << endl; 
		
	}
    else{
    	
    	if(x==2){
		
    	
    	cout << "Mayor: " << mayor << "\n" << "Medio: " << medio << "\n" << "Menor: " << menor << endl; 
			}
    
    
    else
    cout<<"Te quieres morir ese?!..."<<endl;	
}
	cout<<"\n"<<endl;
	
	cout<<"Haremos una division del primer numero entre el segundo \n"<<endl;
	cout<<"Con la condicion de que tengan 5 unidades de diferencia"<<endl;
	
	cout << "Ingrese el primer numero : "; 
    cin >> num1; 
    cout << "Ingrese el segundo numero : "; 
    cin >> num2; 
	
	if(num2<num1+5 or num2>num1+5){
	
	
	division=num1/num2;
	
	cout << "La division de los dos numeros es: "<<division<<endl; 
}
	else{
	
	cout<<"No hay 5 unidades de diferencia"<<endl;
	
	}
	
		cout<<"\n"<<endl;
	
	cout<<"Haremos una multiplicacion del segundo por el tercero \n"<<endl;
	cout<<"Con la condicion de que ambos sean pares mayores a 5"<<endl;
	

	
	
	
    system ("pause"); 
    
    return 0; 
} 
