#include <iostream>

using namespace std;

struct alumno
{
    string nombre;
    int calif [3];

};

float promedio_1(alumno);
float promedio_2(int []);

int main()
{
    alumno x;
    cout<<"Nombre: ";
    cin>>x.nombre;

    cout<<"Calificaciones: "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<i+1<<": ";
        cin>>x.calif[i];
    }
    cout<<"Promedio: "<<promedio_1(x)<<endl;
    return 0;
    cout<<"Promedio: "<<promedio_2(x.calif)<<endl;
}
float promedio_1(alumno x)
{
    float s=0;
    for(int i=0;i<3;i++)
        s += x.calif[i];
    return s/3;
}
float promedio_2 (int c[])
{
    float s=0;
    for (int i=0; i<3; i++)
        s+=c[i];
    return s/3;
}
