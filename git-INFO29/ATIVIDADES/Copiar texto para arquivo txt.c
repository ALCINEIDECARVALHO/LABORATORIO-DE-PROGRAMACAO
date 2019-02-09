#include <stdio.h>
#include <conio.h>
 
int main(void)
{
  FILE *ent; // cria variável ponteiro para o arquivo
  char letra [80]; // variável do tipo string
 
  //abrindo o arquivo com tipo de abertura w
  ent = fopen("teste.txt", "w");
 
  //testando se o arquivo foi realmente criado
  if(ent == NULL)
  {
     printf("Erro na abertura do arquivo!");
     return 1;
  }
 
  printf("Escreva uma palavra para testar gravacao de arquivo: ");
  scanf("%s", letra);
 
  //usando fprintf para armazenar a string no arquivo
  fprintf(ent, "%s", letra);

  //usando fclose para fechar o arquivo
  fclose(ent);
 
  printf("Dados gravados com sucesso!");
 
  getch();
  return(0);
}
