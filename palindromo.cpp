#include "iostream"
#include "stdlib.h"
#include "string.h"
#include "math.h"
#include "conio.h"
using namespace std;

const unsigned maxi1=40;
const unsigned maxi2=40;

int main(){

	char part1[maxi1];
	char part2[maxi2];
	int cade,i,x,a=0,p=0,e=0;
	char b=' ';

	cout<<"Ingresa un polindromo: ";cin.getline(part1,maxi1);
	cade=strlen(part1);

	for(i=0;i<=cade;i++)
	{
		if(part1[i]==b)
		i++;
		part2[e]=part1[i];
		e++;
	}
	    
	    for(x=cade-1;x>=0;x--)
		
	    cout<<part1[x];
	    x=0;
	    cade=strlen(part2);
		
	    
		for(x=cade-1;x>=0;x--)
		{
	    	if(part2[x]==part2[a])
	    	p++;
	    	a++;
		}
		
		if(p==cade)
		{
		cout<<endl<<"Has escrito un palindromo"<<endl;
		
		

		}
		else
		cout<<endl<<"No es palindromo"<<endl;

	getch();
	return 0;
}
