#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{
FILE *alias;
alias =fopen("C:\ejemplo.txt","w");
if (alias == NULL)
       {
     cout << "\n \r no se puede abrir el archivo!!!";
     }
getche();
//return();
}
