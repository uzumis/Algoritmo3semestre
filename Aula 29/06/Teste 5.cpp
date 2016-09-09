#include <stdio.h>
main(){
	struct teste_ponteiro{
		int *ptr1;
		int *ptr2;
	};
	struct teste_ponteiro teste;
	int i1 = 500, i2;
	teste.ptr1=&i1;
	teste.ptr2=&i2;
	*teste.ptr2=100;
	printf("i1=%i, *teste.p1=%i \n", i1, *teste.ptr1);
	printf("i2=%i, *teste.p2=%i \n", i2, *teste.ptr2);
}
