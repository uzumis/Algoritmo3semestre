#include <stdio.h>
main(){

int val[11];
int i;
i=1;
val[1]=5;
for (i=1;i<11;i++)
{
val[i]=5*i;
printf("Numero [%i]=%i \n",i,val[i]);
}
return(0);
}
