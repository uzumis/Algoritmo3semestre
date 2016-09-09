#include <stdio.h>
#include <stdlib.h>
main()
{
	int *p1, *p2;
	
	p1 = (int *) malloc(sizeof(int));
	p2= (int *) malloc(sizeof(int));
	*p1 = 10; 
	*p2 = 20;
	printf("%d \n", *p1);
	p2=p1;
	printf("%d", *p2);
	return(0);
}
