// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: Alcineide Anunciação de Carvalho
//  email: alcineide.13@gmail.com
//  Matrícula:2017116041
//  Semestre: 2018.2

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 20/06/2018 - 19/08/2016

// #################################################

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
## função utilizada para testes  ##

 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
int somar(int x, int y){
  int soma = 0;
  soma = x + y;
  return soma;
}

/*
## função utilizada para testes  ##

 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x){ //função utilizada para testes
  int fat = 1;
  return fat;
}

/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 */

int validardata(int dia,int mes,int ano){

     int datavalida;

     if (mes > 12|| mes< 1 || dia < 1 || dia > 31){
        datavalida=0;
     }

     else if ((dia < 1 || dia > 31) && (mes == 1 || mes==3 || mes==5 || mes ==7 || mes ==8 || mes ==10 ||mes ==12)){
        datavalida=0;
     }

   else if ((dia <1 || dia > 30) && (mes == 4 || mes==6 || mes==9 || mes ==11)){
        datavalida=0;
     }

   else if ((ano%4==0&&ano%100!=00)|| (ano%400==0&&ano%4==00)){
         if(dia >29 && mes == 2){
                datavalida = 0;
        }
      }
         
  else if (dia > 28 && mes == 2){
               datavalida = 0;
        }

            
      
  return datavalida;

 }


int q1(char *data){
    int datavalida = 1;

    char d[3], m[3], a[5];
    int i = 0, j = 0, y = 0, t = 0, u = 0;
    int dia, mes, ano;
   

    for(i = 0; data[i] != '/'; i++){
        d[i] = data[i];
    }
    
    dia=atoi(d);

    for(j= i+1, i= 0; data[j] != '/'; j++, i++){
        m[i] = data[j];
    }
    
    mes = atoi(m);

    for(t = j+1, u = 0; data[t] != '\0'; t++, u++){
        a[u] =data[t];
    }
   
    ano = atoi(a);

    if (validardata(dia,mes,ano)==0)
        
       return 0;
    else

       return 1;
    
}

/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. Além disso, a função tem três parâmetros qtdDias, qtdMeses e qtdAnos. Esses três parâmetros devem ser utilizados para guardar os resultados dos cálculos. Na chamada da função deve passar o valor -1 para os três
 @saida
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal */

        

int validade_data(char *data, int *Dia, int *Mes, int *Ano){   

    int datavalida = 1;

    char d[3], m[3], a[5];
    int i = 0, j = 0, y = 0, t = 0, u = 0;
    int Dias, Meses, Anos;
  
   

    for(i = 0; data[i] != '/'; i++){
        d[i] = data[i];
    }
    
    Dias=atoi(d);

    for(j= i+1, i= 0; data[j] != '/'; j++, i++){
        m[i] = data[j];
    }
    
    Meses = atoi(m);

    for(t = j+1, u = 0; data[t] != '\0'; t++, u++){
        a[u] =data[t];
    }
   
    Anos = atoi(a);

   if (Meses > 12|| Meses< 1 || Dias< 1 || Dias> 31){
        datavalida=0;
     }

     else if ((Dias < 1 || Dias > 31) && (Meses == 1 || Meses==3 || Meses==5 || Meses ==7 || Meses ==8 ||Meses ==10 ||Meses ==12)){
        datavalida=0;
     }

   else if ((Dias <1 || Dias > 30) && (Meses == 4 || Meses==6 || Meses==9 ||Meses==11)){
        datavalida=0;
     }

   else if ((Anos%4==0&&Anos%100!=00)|| (Anos%400==0&&Anos%4==00)){
         if(Dias >29 && Meses == 2){
                datavalida = 0;
        }
      }
         
  else if (Dias > 28 && Meses == 2){
               datavalida = 0;
        }


    if (datavalida==0)
        
       return 0;

   else

       return 1;


  }


int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos){

   int validar_inicial = 0, validar_final = 0, diaInicial, diaFinal, mesInicial, mesFinal, anoInicial, anoFinal;
   int nDias = 0, nMeses = 0, nAnos = 0,Meses,Anos;
   int i, cont_bis = 0;
   

    validar_inicial=validade_data(datainicial,&diaInicial,&mesInicial,&anoInicial);
    validar_final=validade_data(datafinal,&diaFinal,&mesFinal,&anoFinal);

  // data inicial invalida

   if (validar_inicial==0) 

         return 2;
    
 // data final invalida
    
   else if(validar_final==0)
        return 3; 
    
 // data inicial maior que a final 

    if((diaInicial > diaFinal) && (mesInicial > mesFinal) && (anoInicial > anoFinal)){
        return 4;
    }
    else if((diaInicial > diaFinal) && (mesInicial > mesFinal) && (anoInicial == anoFinal)){
        return 4;
    }
    else if((diaInicial > diaFinal) && (mesInicial == mesFinal) && (anoInicial == anoFinal)){
        return 4;
    }
    else if((diaInicial < diaFinal) && (mesInicial > mesFinal) && (anoInicial > anoFinal)){
        return 4;
    }
    else if((diaInicial < diaFinal) && (mesInicial == mesFinal) && (anoInicial > anoFinal)){
        return 4;
    }
    else if((diaInicial < diaFinal) && (mesInicial < mesFinal) && (anoInicial > anoFinal)){
        return 4;
    }
    else if((diaInicial == diaFinal) && (mesInicial == mesFinal) && (anoInicial > anoFinal)){
        return 4;
         }

 //data final maior que a inicial

  else if ((diaInicial< diaFinal) || (mesInicial < mesFinal) || (anoInicial < anoFinal)) {

     if ((Meses == 1 || Meses==3 || Meses==5 || Meses ==7 || Meses ==8 ||Meses ==10 ||Meses ==12)){
        
          for(i=mesInicial;i < mesFinal;i++){
                nMeses++;

               }
          
          for (i=anoInicial; i <=anoInicial;i++){
              if((Anos%4==0&&Anos%100!=00)|| (Anos%400==0&&Anos%4==00)){
                     cont_bis++;
                }
               else {
                   cont_bis=cont_bis;
                }

                    nAnos++;

                     }

                nDias=(31- diaInicial)+diaFinal;

                 }

          else if ((Meses == 4 || Meses==6 || Meses==9 ||Meses==11)){

    
 		for(i=mesInicial;i < mesFinal;i++){
                  nMeses++;

                 }
          
          	for (i=anoInicial; i <=anoInicial;i++){
             	  if((Anos%4==0&&Anos%100!=00)|| (Anos%400==0&&Anos%4==00)){
                     cont_bis++;
                    }

               	   else {
                   cont_bis=cont_bis;
                   }

                    nAnos++;

                   }

                nDias=(30- diaInicial)+diaFinal;

                    }                  


           else if (Meses ==2){

               for(i = anoInicial; i <= anoFinal; i++){
                    if(i%4 == 0 && (i%400 == 0 || i%100 != 0)){
                        cont_bis++;
                    }
                    else{
                        cont_bis = cont_bis;
                    }
                    nAnos++;
                }

                if(cont_bis > 0){
                    nDias = (29 - diaInicial) + diaFinal;
                    if(nDias >= 29){
                        nDias = ((29 - diaInicial) + diaFinal)%29;
                    }
                    
                }
                else{
                    nDias = (28 - diaInicial) + diaFinal;
                    
                }
                
        }
 


   
 }
 
   
    /*mantenha o código abaixo, para salvar os dados em 
    nos parâmetros da funcao
    */
    *qtdDias = nDias;
    *qtdAnos = nAnos;
    *qtdMeses = nMeses;

    //coloque o retorno correto
    return 1;

}


/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */
int q3(char *texto, char c, int isCaseSensitive){
    int qtdocorrencias = 0,i;
    char minusculo[250];
    char maiusculo[250];

    if(isCaseSensitive ==1){
        for(i=0;i<strlen(texto);i++){
          if( c==texto[i]){
             qtdocorrencias ++;
         }
     } 

   }

  else {
        for(i=0; i<strlen(texto); i++){
            minusculo[i] = texto[i] + 32;
	}
        for(i=0; i<strlen(texto); i++){
	    maiusculo[i] = texto[i] - 32;
        }
        for(i=0; i<strlen(texto); i++){
            if(c == minusculo[i] || c == maiusculo[i] || c == texto[i]){
                qtdocorrencias++;

      }
        }
          }  
       return qtdocorrencias;

}

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;

 */
int q4(char *strTexto, char *strBusca, int posicoes[30]){
    int qtdOcorrencias = 0;
    char auxiliar[30];
    int i=0,x=0,j=0,p=0;
   int palavra=strlen(strBusca);
    int texto=strlen (strTexto);

    for(i=0;i<texto;i++){

       if(strTexto[i]==strBusca[x]){
            auxiliar[x]= i;
              x++;
      
  
            
     for(j=i+1; j < texto; j++){

                if(strTexto[j] == strBusca[x]){
                    auxiliar[x] = j;
                    x++;
                }
                else{
                    x = 0;
                    break;
                }

     if(x==palavra){
      qtdOcorrencias++;
     
       posicoes[p]=auxiliar[1];

       p++;

       posicoes[p]= auxiliar[palavra-1]+1;
        p++;
       

      }
        }
          }

       else
           x=0;

          
        }
         

    return qtdOcorrencias;

}
  
/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num){
     
         int i;
         int resto=0;
         int inverso=0;
      
       while(num>0){

         resto=num%10;
         inverso=inverso*10+resto;
         num=num/10;
       }
    
     return inverso;

}

/*
 Q6 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */


int exponencial(int base,int exp){

      int pot=1;
      int icont=0;


  for(icont=0;icont<exp;icont++)
       pot*=base;

  
   return pot;
}
    

int q6(int numerobase, int numerobusca){
    int qtdOcorrencias=0;
    int i,j,x=0;
    int aux_n=numerobase;
    int aux2=0;
    int pot=1;
   


    for (i=1;aux_n>0;i++){
       for (j=1;x!=aux_n;j++){
            aux2=exponencial(10,j);
            x=aux_n%aux2;
            if (x==numerobusca)                
                qtdOcorrencias++;

    }

      aux_n=numerobase/exponencial(10,i);
        x=0;
     }

return qtdOcorrencias;
}
