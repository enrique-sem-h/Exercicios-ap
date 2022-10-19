/* Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. 
A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na 
origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos 
eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação. */
#include <stdio.h>

int main(){
    float x, y;

    printf("Digite um valor para x: ");
    scanf("%f", &x);

    printf("Digite um valor para y: ");
    scanf("%f", &y);

    if(x > 0 && y > 0)
    printf("o ponto esta no quadrante 1");
    else if(x < 0 && y > 0)
    printf("o ponto esta no quadrante 2");
    else if(x < 0 && y < 0)
    printf("o ponto esta no quadrante 3");
    else if(x > 0 && y < 0)
    printf("o ponto esta no quadrante 4");
    else if(x == 0 && y == 0)
    printf("o ponto esta na origem");
    else if(x == 0 && y != 0)
    printf("O ponto esta no eixo x");
    else
    printf("O ponto esta no eixo y");
}