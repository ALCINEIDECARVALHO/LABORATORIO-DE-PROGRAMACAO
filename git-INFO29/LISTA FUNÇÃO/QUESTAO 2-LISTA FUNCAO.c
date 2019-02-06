#include <stdio.h>
#include <stdlib.h>


int funcaosubtrai(int x,int y,int w){
      int resultado;

      resultado=x-y-w;

      return resultado;
}

int main() {
         
         int a,b,c;
         int subtracao;

  printf("Informe o primeiro numero\n");
  scanf("%d",&a);

  printf("Informe O segundo numero\n");
  scanf("%d",&b);

  printf("Informe O segundo numero\n");
  scanf("%d",&c);   

  subtracao=funcaosubtrai(a,b,c);

  printf("o resultado é %d\n",subtracao); 
       
  return 0;
}
