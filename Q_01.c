
//1) Quais serão os valores de x, y e p ao final do trecho de código abaixo:
#include<stdio.h>//biblioteca

int main (){//funcao principal


int x, y, *p; //declaracao das variaveis x, y e o ponteiro p
y = 0;// y receber o valor 0
p = &y; // ponteiro receber o endereco de y exemplo 00060FE
x = *p;// x esta recebendo o conteudo de p que e igual a zero
x = 4;//x esta recebendo o valor 4
(*p)++;// o conteudo de p que era zero agora alterou para 1
--x;// o valor de x era 4 como esta indicando que x que tira um e tao alterar o valor dele para 3
(*p) += x;// desse modo nao altera mas no valor x e sim no conteudo de p que aumentar mais um ou seja
// ele recebeu o valor de x=3 com +1 ficou p=4 entretanto quem quarda o conteudo p e y.

printf("%i %i %p", x, y, p );//resultado final dos valores de x = 3, y = 4 e p = 000060FE <-exemplo

return 0;
}