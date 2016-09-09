#include <stdio.h>
void troca(int *p1, int *p2){
int tmp;
tmp=*p1;
*p1=*p2;
*p2=tmp;
}
main()
{
	int a=5,b=10;
	printf("%i-%i \n",a, b);
	troca (&a,&b);
printf("%i-%i", a,b);
}
