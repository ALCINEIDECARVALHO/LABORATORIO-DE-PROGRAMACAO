#include <stdio.h>
#include <stdlib.h>

typedef struct numero{
   int valor;   
}VETOR;


VETOR ler4numeros(VETOR vetor[4]){
   int i;

  for(i=0;i<4;i++){
    printf("Informe um numero\n");
    scanf("%d", &vetor[i].valor);
  }
  return vetor[4];
}
    
int main(void) {

   VETOR vetor[4];
   VETOR resultado;
    
    resultado = ler4numeros(vetor);

   for(int i = 0;i < 4; i++)
     printf("Os numeros informados são %d\n", vetor[i].valor);
   

  return 0;
}