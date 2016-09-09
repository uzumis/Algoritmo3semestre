 //Incluir nó quando há ou não há lista
 #include <stdio.h>
 #include <stdlib.h>
 typedef struct NO {
 int idade;
 struct NO *proxno;	
 }NO;
 
 int addnofim (NO **P, int id); 
 main(){

 NO *ptr = NULL;
 addnofim (&ptr, 15);
 printf ("%i", ptr->idade);
 
} 
// SE A LISTA FOR VAZIA
 int addnofim (NO **P, int id)
{
 		NO *p1,*p2;
 		p1=*P;
 	if (p1 == NULL)
 		{
		
 			p1=(NO *)malloc(sizeof(NO));
 			p1->idade=id;
 			p1->proxno=NULL;
 			*P=p1;}
//SE NÃO
 	else{
 		while (p1->proxno !=NULL) //FIM DA LISTA
	{
 		p1=p1->proxno;
 	}
 		p2=(NO *)malloc (sizeof(NO));
 			if (p2!=NULL)
 				p2->idade=id;
 				p2->proxno=NULL;
 				p1->proxno=p2;
 		}
 	int addnoinicio(NO **p, int a)

		{
			p1 = malloc (sizeof(NO));
 			p1->idade=a;
			p1->proxno =*P;
			*P=p1;	
		}
}

 
