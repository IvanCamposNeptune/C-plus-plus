#include <iostream>

using namespace std;

struct fecha
{
    int dia;
    string mes;
    int anio;
};
bool valida (fecha);
void incrementar_semana(fecha&);
string minusculas(string);
int main()
{
    fecha i;
    cout<<"Dia: ";
    cin>>i.dia;
    cout<<"Mes: ";
    cin>>i.mes;
    cout<<"Año: ";
    cin>>i.anio;

    i.mes = minusculas(i.mes);

    cout<<"Fecha: "<<i.dia<<"/"<<i.mes<<"/"<<i.anio;

    if (valida(i))
    {
        cout<<"\nFecha valida"<<endl;
        cout<<"\nIncrementando..."<<endl;
        incrementar_semana(i);
        cout<<"\nFecha: "<<i.dia<<"/"<<i.mes<<"/"<<i.anio;
    }
    else
        cout<<"\nFecha no valida"<<endl;
    return 0;
}

bool valida (fecha x)
{
    if (x.dia<1 || x.dia>31)
        return false;
    if (x.mes!="ene"&&
        x.mes!="feb"&&
        x.mes!="mar"&&
        x.mes!="abr"&&
        x.mes!="may"&&
        x.mes!="jun"&&
        x.mes!="jul"&&
        x.mes!="ago"&&
        x.mes!="sep"&&
        x.mes!="oct"&&
        x.mes!="nov"&&
        x.mes!="dic")
        return false;

    if (x.anio<=0)
        return false;

    return true;
}
void incrementar_semana (fecha &x)
{
    x.dia+=7;
    if(x.dia>31)
    {
        x.dia-=31;
        if(x.mes=="ene") x.mes="feb";
        else if (x.mes=="feb") x.mes="mar";
        else if (x.mes=="mar") x.mes="abr";
        else if (x.mes=="abr") x.mes="may";
        else if (x.mes=="may") x.mes="jun";
        else if (x.mes=="jun") x.mes="jul";
        else if (x.mes=="jul") x.mes="ago";
        else if (x.mes=="ago") x.mes="sep";
        else if (x.mes=="sep") x.mes="oct";
        else if (x.mes=="oct") x.mes="nov";
        else if (x.mes=="nov") x.mes="dic";
        else if (x.mes=="dic")
        {
            x.mes = "ene";
            x.anio++;
        }
    }
}
string minusculas(string x)
{
    string r="";
    for(unsigned int i=0;i<x.length();i++)
        r+=tolower(x[i]);
    return r;
}
