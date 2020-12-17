# include <iostream>
using namespace std;
 
 
double fondo(double to)
{
    cout<<endl;
    if (to==0)
        cout<<"Ud. no tiene fondos"<<endl<<endl;
    else
        cout<<"Sus fondos son de : "<<to<<endl;
    return to;
}
 
void fin()
{
    cout<<endl<<"Saliendo..."<<endl<<endl;
} 
 
double asignar(double to)
{
    double asi=0;
    cout<<endl;
    do
    {
        cout<<"Asignar a cuenta de ahorro: ";
        cin>>asi;
        if(asi>0)
            {
                to=to+asi;
                cout<<"Disponibilidad de efectivo $: "<<to<<endl;
            }
        else
            cout<<"Ingrese una cantidad valida"<<endl<<endl;
    }while (asi<=0);
    return to;
}
 
double retiro(double to)
{
    double ret=0;
    cout<<endl;
    if(to==0)
        cout<<"Ud. no tiene fondos suficientes "<<endl;
    else
    do
    {
        cout<<"Cobrar el cheque $: ";
        cin>>ret;
        if(ret>0)
            {
                to=to-ret;
                cout<<"Los fondos del cliente $ : "<<to<<endl;
            }
        else
            cout<<"Ingrese una cantidad valida"<<endl<<endl;
    }while (ret<=0);
    return to;
}
 
int menu(double to)
{
    int opcion;
 	cout<<endl<<"----------CLIENTE CORRIENTE---------- : \n";
 	cout<<"Asignar cuenta de ahorro del cliente corriente  (1)"<<endl;
    cout<<"Cobrar cheque (2)"<<endl;
    cout<<"Mostrar fondos del cliente (3)\n \n"<<endl;
    
	cout<<endl<<"----------CLIENTE COMUN---------- : \n";
    cout<<"Asignar fondos del cliente comun  (4)"<<endl;
   cout<<"Consultar saldo del cliente comun  (5)"<<endl;
	cout<<"Salir (6)"<<endl;
    
    cin>>opcion;
    return opcion;
}
 
double proceso(int opcion,double to) 
{
    switch (opcion)
    {
        case 1:to=asignar(to);break;
        case 2:to=retiro(to);break;
        case 3:to=fondo(to);break;
        case 4:to=asignar(to);break;
        case 5:to=fondo(to);break;
        case 6:cout<<endl<<"Ud. ha salido del sistema"<<endl<<endl;exit (0); 
        default: {
                    cout<<"Ingrese un valor correcto"<<endl;
                    menu(to);
                 }
    }
    return to;
}
 
int main()
{
	
	system("color a");
	
    double to=0;
    int opcion, a;
    char c;
    do
    {
        cout<<endl<<endl;
        opcion=menu(to);
        to=proceso(opcion,to);
        do
        {
        cout<<endl;
        cout<<" (Q) Para regresar al menu con el tipo de cliente que escogiste  \n (W) Para salir y cambiar de cliente \n: ";
        cin>>c;
        a=0;
        switch(c)
        {
            case 'q':
            case 'Q':system("cls");a=2;break;
            case 'w':
            case 'W':break;
            default: cout<<endl<<"Ingrese un valor correcto"<<endl;a=1;
        } 
        } while (a==1);
    } while (a==2);
    fin();
    return 0;
}
 
