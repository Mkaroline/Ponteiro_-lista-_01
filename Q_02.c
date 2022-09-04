//2

#include<stdio.h>//biblioteca

int main (void){//funcao principal
system("cls");
int x, *p;//declaracao
x = 100;//x esta recebendo 100
p = x;//nesse caso a falta do & o ponteiro nao esta atribuindo o endereco da variavel x .
printf("Valor de p = %p\tValor de p = %d", p, p);// nessa parte era para ter colocado a variavel x e  so um p
//exemplo printf("Valor de x = %x\tValor de p = %p", x, p);

return 0;
}
/*
a) Esta mensagem é de erro ou advertência?
 Advertenca
b) Por que o compilador emite tal mensagem?
 Pois ela indentifica o que esta faltando no codigo onde chama atencao o que esta falatando no coidigo ou seja o & e mesmo assim ele copilar .
c) Compile e execute o programa. A execução foi bem sucedida?
  A pois a advertencia que mostrou onde esta o erro no programa desse modo ajeitei e foi bem sucedida.
d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja
emitida pelo compilador.
  Compilado com sucesso
e) Compile e execute novamente o programa. A execução foi bem sucedida?
   sim
*/

