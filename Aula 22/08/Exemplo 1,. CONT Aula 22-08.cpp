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
//ADDNOINICIO
void addnoinicio(NO **p, int a)

		{
			p1 = malloc (sizeof(NO));
 			p1->idade=a;
			p1->proxno =*p;
			*p=p1;	
		}
}
//REMOVER NÓ no INICIO
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
 
 
 // REMOVENDO UM NÓ NO FIM	
 
 void removenofim (LNO **p){
 	LNO *p1, *p2;
 	p1 = *p;
 	of (p1 !=NULL){
 		if (p1->prox=NULL){
 			free(*p);
 			*p=NULL;
	  }else{
	  	while (p1 ->prox !=NULL) {
		  p2 = p1;
		  p1 = p1 ->prox;
		  }
	  }
	 }
 }
 
 //realizar procura de um item na lista
 int procurar (LNO *p, int x){
 	if (p == NULL)
 		return (0);
 		
 }
 else
 {
 	do {
 		if (p->dado == x)
 			return (1);
 		p = p->link;
	 } while (p !=NULL);
	 return (0);
 }
 
// apagar elemento da busca de um item da lista
void removebusca 

