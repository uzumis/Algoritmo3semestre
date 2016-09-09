#include <stdio.h>
main(){
	
float vet[10];
int i;
int in;
float n;
in=0;
n=0;
for (i=0;i<10;i++)
{	
	printf("digite o valor\n");
	scanf("%f",&vet[i]);
n=(float)vet[i]+in;
in=n;
}
n=n/10;
	printf("Rosivaldo, sua nota e: %f",n)
	;
	return(0);
}
