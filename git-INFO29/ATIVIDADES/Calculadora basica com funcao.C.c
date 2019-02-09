#include <stdio.h>

float somar(float a, float b) {
	float somar = a + b;
	return somar;
}

float subtracao(float a,float b){
	float subtracao= a-b;
	return subtracao;
}


float multiplicacao(float a,float b){
	float multiplicacao= a*b;
	return multiplicacao;
}

float divisao(float a,float b){
   float divisao=a/b;
   return divisao;
}

int main() {
	float x, y, resultsoma, resultsub,resultmulti,resultdiv;

	printf("Define o valor de x: ");
	scanf("%f", &x);
	printf("Define o valor de y: ");
	scanf("%f", &y);

	   resultsoma = somar(x, y);
           resultsub=subtracao (x,y);
           resultmulti= multiplicacao (x,y);
           resultdiv= divisao(x,y);


	printf("Soma: %.2f\n", resultsoma);
        printf("Subtracao: %.2f\n", resultsub);
        printf("Multiplicacao: %.2f\n", resultmulti);
        printf("Divisao:%.2f",resultdiv);
}
