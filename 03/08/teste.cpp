#include <stdio.h>
main (){
		typedef struct testeno {
			int valor;
			struct testeno *proxno;
			
		} NO;
		NO no1,no2,no3;
		int i;
		
		no1.valor=10;
		no2.valor=20;
		no3.valor=30;
		
		no1.proxno = &no2;
		no2.proxno = &no3;
		
		i=no1.proxno->valor;
		
		printf ("%i-", i);
		printf ("%i\n", no2.proxno->valor);
}
