#include <stdio.h>
main()
{
	int a=20;
	int b=30;
	int *p;
	printf("End. a = %p \n", (void*)&a);
	printf("End b = %p \n", (void*)&b);
	p=&a;
	printf("End P aponta %p", (void*)p);
	return(0);
	
}
