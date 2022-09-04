#include<stdio.h>//biblioteca

int main (void){//funcao principal

int a , b , c;//declaracao das variaveis
int*p1;//declaraccao do ponteiro p1
int *p2 = &a;// declarando o ponteiro p2 que vai ser igual ao endereco de a
int *p3 = &c;// declarando o ponteiro p3 que vai ser igual ao endereco de c
p1 = p2;// ponteiro p1 e igual ao ponteiro p2
*p2 = 10;// o conteudo de p2 vai receber 10
b = 20;// a variavel b vai receber 20

int **pp;// declaracao do ponteiro  de ponteiro
pp = &p1;// o ponteiro de ponteiro vai receber o endereco de p1
*p3 = **pp;// o conteudo de p3 receber o conteudo do ponteiro de ponteiro
*p2 = b + (*p1)++;// o conteudo de p2 receber o valor de b mais o conteudo de p1 + 1
printf("%d\t%d\t%d\n", a, b , c);// resulatdo final do programa
return 0;
}
