#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");

char c='U';
char *pont_char=&c;
printf("%c-%c \n",c,*pont_char);
c= 'F';
printf("%c - %c \n", c, *pont_char);
*pont_char='P';
printf("%c-%c \n", c , *pont_char);

printf("O Endereco do ponteiro 'c' é: %p \n", (void*) pont_char);
return(0);
}

