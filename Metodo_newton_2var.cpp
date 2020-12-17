#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float a,x,x1,x2,x3,y,y1,y2,y3,error,error1,temp=0,temp1=0,b,c=0,d;
	int i=0,it;
	a=0;
	cout<<"Ingrese xi: ";cin>>x;
	cout<<"Ingrese yi: ";cin>>y;
	cout<<"Ingrese el numero de iteraciones: ";cin>>it;
	do{
	i++;	
	x1=(pow(x,2)+(y*x)-10);
	x2=(2*x)+y;
	x3=3*pow(y,2);
	y1=y+(3*x*pow(y,2)-57);
	y2=x;
	y3=1+(6*x*y);
	temp=a;
	temp1=b;
	a=x-(((x1*y3)-(y1*y2))/((x2*y3)-(y2*x3)));
	c=y-(((y1*x2)-(x1*x3))/((x2*y3)-(y2*x3)));
	b=x;
	d=y;
	x=a;
	y=c;
	error=((a-temp)/a)*100;
	error1=((c-temp1)/c)*100;
	if(error<0){
		error=error*-1;
	cout<<"x"<<i<<" --- "<<b<<" --- "<<x<<" --- "<<error<<"\n";}
	else
	cout<<"x"<<i<<" --- "<<b<<" --- "<<x<<" --- "<<error<<"\n";
	if(error1<0){
		error1=error1*-1;
		cout<<"y"<<i<<" --- "<<d<<" --- "<<y<<" --- "<<error1<<"\n";}
	else
	   cout<<"y"<<i<<" --- "<<d<<" --- "<<y<<" --- "<<error1<<"\n";
	
		}
	while(i!=it && i<it );
		cout<<"la raiz en x es= "<<x<<endl;
		cout<<"la raiz en y es= "<<y<<endl;
		system("pause");
	return 0;
}

