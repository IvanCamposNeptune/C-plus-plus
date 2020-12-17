#include <iostream>
#include "stdio.h"

using namespace std;

int main(){
	
	int opc=0;
	
    float suel, horas,triple=0,doble=0,salario=0,retardo=0,total,extra=0;
	int tarde=0,bandera=0;

	cout << "Ingresa tu sueldo por hora: \n"; cin >> suel;
	cout << "Horas totales laboradas a la semana: \n"; cin >> horas;
	cout << "Numero de retardos 0 si no hay retardos: \n"; cin >> tarde;
	cout<<" \n";

	if (horas <= 40){
		extra = 0;
	}else{
	extra = horas - 40;
	bandera=1;
}

	salario = 40 * suel;

	if (extra > 0){
		if (extra > 8){
			triple = (((extra - 8) * 3) + (8 * 2))*suel;
		}
		else{
			doble = (extra * 2)*suel;
		}
		total = doble + triple;

	}
	else{
		
		total = total + ((horas - extra) * suel);
	}



	if (tarde > 0){
		if (tarde % 2 == 0){
			retardo = (salario*.01)*tarde;
		}
		else{
			retardo = (salario*.01)*(tarde - 1);
		}
		total = total - retardo;
	}
	
	else{
		total = total + suel;
	}

	if (extra == 0)
		cout << "No hay bonificaciones por extras" << endl;
	else
		cout << "Se bonifico $: " << doble + triple << " por horas extras" << endl;






	if (tarde == 0 )
		cout << "No hay descuento por retardos y se le bonifico con $: " << suel << endl;
	else
		cout << "Se desconto $: " << retardo << " por retardo" << endl;



if(bandera == 1)
	cout << "Salario Total $: " << total + ((horas - extra) * suel) << endl;
else
cout << "Salario Total  $" << total << endl;



	system("pause");
	
}
