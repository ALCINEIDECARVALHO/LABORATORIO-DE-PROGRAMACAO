#include <stdio.h>

int parouimpar(int num){
   if(num%2==0)
      return 1;
    else 
     return 0;
  }

int main(void) {
          int numero;
          int resultado;

  printf("Digite um numero\n");
    scanf("%d",&numero);
     
 resultado= parouimpar(numero);
 if(resultado==1)
   printf("O numero par\n");
  else 
   printf("O numero impar\n");
 
}
