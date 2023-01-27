#include <stdio.h>
#include <stdlib.h>
// tabuada do numero
void main ()

{
	int n, c, r;
	
	printf("\n Digite um numero: ");
	scanf("%d",&n);
	
	printf("\n\n Tabuada do %d \n", n);
	
	for (c=1; c<=10; c++)
	{
		r=n*c;
		printf("\n\n %d x %d = %d", n, c, r);
	}
	printf("\n");
	
	return(0);
	
}
