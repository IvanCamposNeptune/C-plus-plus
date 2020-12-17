#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int i;
  char buffer [33];
  printf ("Introduce el numero: ");
  scanf ("%d",&i);
  itoa (i,buffer,16);
  printf ("hexadecimal: %s\n",buffer);
  return 0;
}
