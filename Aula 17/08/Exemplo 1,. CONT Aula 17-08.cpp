 //Incluir n� quando h� ou n�o h� lista
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
//SE N�O
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
//ADDNOINICIO
void addnoinicio(NO **p, int a)

		{
			p1 = malloc (sizeof(NO));
 			p1->idade=a;
			p1->proxno =*p;
			*p=p1;	
		}
}
//REMOVER N� no INICIO
void removeno (NO **p){
	NO=*p1;
	p1=*p;
	if (p1 !=NULL){
		P1=p1->proxno;
		free(*p);
	}
	*p=p1;                                                                                                                   
}
	}
}
//ADICIONAR NO NO MEIO
void addnomeio (NO **p, int a){
		NO *p1,*p2,*p3;
 		p1=*P;
 	{
 			while (p1!=p, p1!=NULL){
 		 p1 = malloc (sizeof(NO));
 		 p1->idade = a;
 		 p2->proxno =p3;
 		 *P=p1
		 }
	}	
}
 
