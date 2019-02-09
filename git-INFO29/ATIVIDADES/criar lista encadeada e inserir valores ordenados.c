#include <stdio.h>
#include <stdlib.h>

struct elemento{
	int valor;
	int quantidade;
	struct elemento* proximo;	
};

typedef struct elemento Elemento;
 
 Elemento* lst_cria(void){
	
   return NULL;
   
   } 


 int lst_vazia(Elemento* l)
 {
   if(l==NULL)
     return 1;
   else 
     return 0;  
 }  


 
Elemento* listaOrdenada(Elemento* l, int num)
{
	Elemento* novo;
	Elemento* ant=NULL;
	Elemento* p=l;
	
	
	while(p!= NULL && p->valor < num)
	{
		ant = p;
		p = p->proximo;
	}
	
	
	
	novo=(Elemento*)malloc(sizeof(Elemento));
	novo->valor=num;

  
	
	if(ant==NULL){
		novo->proximo= l;
		l=novo;
		
	}
	else {
		novo->proximo = ant->proximo;
		ant->proximo =novo;
	}
       return l;	
}

void lst_imprime(Elemento*l)
{
	if(lst_vazia(l))
	    return;
	else {
		printf("valor: %d\n", l->valor);
		lst_imprime(l->proximo);
	}    
}
 void lst_libera(Elemento* l)
 {
   Elemento* p=l;
   while(p!=NULL){
     Elemento* t=p->proximo;
      free(p);
      p=t;
      printf("Lista liberada\n");
   }
 }



int main() {
	  
    Elemento* l;
    int opcao;
    int sair=0;
    int numero;

      l=lst_cria();
    
    do{
    printf("Informe a opção\n");
    scanf("%d",&opcao);
    
      switch(opcao){
          case 1:{ printf ("Por favor insirar uma numero");
                    scanf("%d",&numero);
                    l=listaOrdenada(l, numero);
                    break;
                     };
           case 2:{printf("Imprimindo a lista\n");
                     lst_imprime(l);
                     break;
           }  
          case 3: {
              printf("Liberando LIsta\n");
                       lst_libera(l);
                       break;
                }          }           
         
    }while(opcao!=0);
     
    	  	  
	  
	return 0;
}
