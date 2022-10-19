/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura): ◦ Homens: (72,7 * h) – 58
◦ Mulheres: (62,1 * h) – 44,7 */
#include <stdio.h>

int main(){
    float alt;
    char sexo;

    printf("Qual sua altura(em m)?\n");
    fflush(stdin);
    scanf("%f", &alt);

    printf("Digite seu sexo(M ou F)\n");
    fflush(stdin);
    scanf("%c", &sexo);

    float pesoIdealM = (72.7 * alt) - 58;
    float pesoIdealF = (62.1 * alt) - 44.7;

    if(sexo == 'm' || sexo == 'M')
        printf("O seu peso ideal seria: %.1fkg", pesoIdealM);
    else if(sexo == 'f' || sexo == 'F')
        printf("O seu peso ideal seria: %.1fkg", pesoIdealF);
    else
        printf("Erro 134-2, por favor tente novamente");
}