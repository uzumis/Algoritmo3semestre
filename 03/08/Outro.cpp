#include <stdio.h>
main ()
{
		typedef struct testeno {
			int idade;
			float salario;
			struct testeno *proxno;
			
		} NO;
		NO no1,no2,no3,no4,no5, *ptr;

		
		no1.idade=14;
		no2.idade=23;
		no3.idade=32;
		no4.idade=13;
		no5.idade=21;
	
		no1.salario=332;
		no2.salario=443;
		no3.salario=551;
		no4.salario=132;
		no5.salario=143;
	
		no1.proxno = &no2;
		no2.proxno = &no3;
		no3.proxno = &no4;
		no4.proxno = &no5;
		no5.proxno = NULL;
		
		ptr = &no1;
		
		while (ptr !=NULL){
			printf("Idade %i\n", ptr->idade);
			printf("Salario %f\n", ptr->salario);
			ptr = ptr->proxno;
		}

	  						
}
