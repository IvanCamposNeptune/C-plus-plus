void shellsort ( int a[], int n)
/* Este procedimiento recibe un arreglo a ordenar a[] y el tamaño del arreglo n. Utiliza en este caso una serie de t=6 incrementos h=[1,4,13,40,121,364] para el proceso (asumimos que el arreglo no es muy grande). */
{
	int x,i,j,inc,s,t;
	
	for(s=1; s < t; s++)   /* recorre el arreglo de incrementos */
	{
		inc = h[s];
		for(i=inc+1; i < n; i++) 
		{
			x = a[i];
			j = i-inc;
			while( j > 0 && a[j] > x)
			{
				a[j+h] = a[j];
				j = j-h;
			}
			a[j+h] = x;
		}
	}
}


