#include <stdio.h>
#include<stdlib.h>

int fatorial(int num){
   int fat=1;
    
   for (fat=1;num>1;num=num-1) {
       fat= fat*num;
       }  
   return fat;
    }
      
int main() {
  
  int resultado,n;

  printf("Informe o numero\n");
  scanf("%d",&n);

  if (n<0)
     printf("Não existe fatorial\n");
 
  else { 
     resultado = fatorial(n);

    printf("O valor do fatorial é: %d\n",resultado);
    }
  return 0;
}
