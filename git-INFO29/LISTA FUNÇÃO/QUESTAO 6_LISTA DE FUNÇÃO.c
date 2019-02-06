#include <stdio.h>



char ler3letras(char letra[3]){
  int i;

for(i=0;i<3;i++){
  printf("Informe a letra\n");
  scanf("%s",&letra[i]);
  
  }  

return letra[3];
}

int main(void) {
   char l,vetor[3];
   int i;

   l=ler3letras(vetor);

   for(i=0;i<3;i++){
    printf("As letras digitadas  são %c\n",vetor[i]);
      }
  
  
  return 0;
}