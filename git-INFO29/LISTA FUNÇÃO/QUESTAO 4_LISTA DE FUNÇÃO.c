#include <stdio.h>
#include <stdlib.h>

int ler3numeros(int vetor[3] ){
    int i;
     
      for(i=0;i<3;i++){
        printf("Informe um numero\n");
        scanf("%d",&vetor[i]);
      }    
    return vetor[3];    
}

int main(void) {
  int resultado=0,vetor[3],i;

    resultado= ler3numeros(vetor);

  for(i=0;i<3;i++){
    printf("O numero digitado são %d\n",vetor[i]);
      }
  return 0;
}