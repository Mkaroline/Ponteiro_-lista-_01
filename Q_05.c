#include <stdio.h> //biblioteca funcoes principal
#include <stdlib.h>// biblioteca para funcoes 
#include <math.h>  //biblioteca para as operacoes matematicas

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media)//prototipo da funcao
{
	char A, R, F, op;//declarando as variaveis
    int numero_faltas = 0, med;// declarando as variaveis
  med = (p1 + p2 + p2) / 3.0;//formula da media 
  *media = med;// o ponteiro media vai receber a variavel med

  numero_faltas = (faltas * 100) / 100;// numero de faltas vai receber a quantidade de falta multiplicando por 100 e depois divide por 100

  if ((numero_faltas <= 25) && (med >= 6))// laco de repeticao caso o numero de falta for menor e igual a  25% e a media maior que 6 entao aluno aprovado
  {
  	printf("retornou A\n");
    return 'A';
    
  }else if ((numero_faltas <= 25) && (med < 6)){// laco de repeticao se o numero de faltas for menor que 25% e a media menor que 6 entao aluno reprovado
  	printf("retornou R\n");
    return 'R';
  }else if ((numero_faltas > 25)){// caso nao for a nenhuma opcao anteriores vai retornar que o aluno estara em reprovado por falta
  	printf("retornou F\n");
    return 'F';
  }  
}

int main(void)
{// funcao principal
  system("cls"); //limpar o terminal
  float p1, p2, p3, media; //declaracao da variaveis
  int faltas, aulas, numerofalta; //declaracao das variaveis
  char op;//declaracao da variaveis

  printf("Informe a primeira nota:\n");// perdir ao usuario para digitar a primeira nota
  scanf("%f", &p1);//o scanf ler e guarda na variaveis p1 o que o usuario digitou
  printf("Informe a segunda nota:\n");// perdir ao usuario para digitar a segunda nota
  scanf("%f", &p2);// ler e guarda na variaveis p2 o que o usuario digitou no printf
  printf("Informe a terceira nota:\n");// perdir ao usuario para digitar a terceira nota
  scanf("%f", &p3);//ler e guarda na variaveis p3 o que o usuario digitou no printf
  
   printf("Informe a quantidade de aulas:\n");// perdir a usuario a quantidade de aula que foram ministrada
   scanf("%d", &aulas);//ler e guarda na variavel aula o que o usuario digitou no printf

   printf("Informe a quantidade de faltas do aluno:\n");//pedir ao usuario digitar a quantidade de faltas ou seja quantas aulas ele faltou 
   scanf("%d", &faltas);//ler e guarda na variavel faltas o que o usuario digitou no printf

  op = situacao (p1, p2, p3, faltas, aulas, &media); //funcao esta retornando A R ou F  
  switch(op){ // case esta verificando o valor retornado e realizando operacoes de acordo com oq foi retornado em op
    
  case 'A':
    printf("M = %2.f \t 'aprovado'", media);
    break;
  case 'R':
    printf("M = %2.f \t 'Reprovado'", media);
    break;
   case 'F':
   printf("M = %2.f \t 'reprovado por faltas'", media);
   
   
  }
  
   
  return 0;
}
