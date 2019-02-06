# include <stdio.h>
# include <stdlib.h>

int funcaosoma(int x,int y){
    int soma;
    soma= x+y;
    
    return soma;
}

int main (){
    int a;
    int b;
    int resultado;

  printf(" Informe o numero a\n");
  scanf("%d",&a);
  printf(" Informe o numero b\n"); 
  scanf("%d",&b); 

    resultado = funcaosoma(a,b);

      printf("O resultado da soma é: %d",resultado);

  return 0;

}
