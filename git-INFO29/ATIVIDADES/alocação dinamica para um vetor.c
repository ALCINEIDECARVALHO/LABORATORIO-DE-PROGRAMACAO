#include <stdio.h>
#include<stdlib.h>

int* alocamemoria(int tamanho){
   int* vetor;
   vetor= (int*)malloc (tamanho * sizeof(int));
   return vetor;
}


int main() {
      int qtd, i, *vet;
    
    printf("Informe o tamanho do vetor\n");
    scanf("%d",&qtd);

    vet=alocamemoria(qtd);

    for(i=0;i<qtd;i++){
      printf("informe o numero da posição %d:  \n",i);
        scanf("%d",&vet[i]);
    }

   for(i=0;i<qtd;i++)
     printf("Os numeros digitados são %d:  \n",vet[i]);


    free(vet);



  return 0;
}