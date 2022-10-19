/* Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir: */
#include <stdio.h>

int main()
{
    int n1, n2, n3, operacao;

    printf("Digite o numero do calculo que deseja fan3er!\n1. Media Geometrica\n2. Media Ponderada\n3. Media Harmonica\n4. Media Aritmetica\n");
    scanf("%d", &operacao);

    switch(operacao)
    {
    case 1:
        printf("Operacao escolhida: Media Geometrica\n");
    break;
    case 2:
        printf("Operacao escolhida: Media Ponderada\n");
    break;
    case 3:
        printf("Operacao escolhida: Media Harmonica\n");
    break;
    case 4:
        printf("Operacao escolhida: Media Aritmetica\n");
    break;

    default:
        printf("Ocorreu um erro, tente novamente");
        return 0;
    }

    printf("Digite os 3 numeros a serem calculados:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    switch(operacao)
    {
    case 1:
        printf("Media Geometrica = %d", n1 * n2 * n3);
    break;
    case 2:
        printf("Media Ponderada = %d", ((n1 + 2) * (n2 + 3) * n3) / 6);
    break;
    case 3:
        printf("Media Harmonica = %d", 1 / (1/n1) + (1/n2) + (1/n3));
    break;
    case 4:
        printf("Media Aritmetica = %d", (n1 + n2 + n3) / 3);
    break;
    default:
        break;
    }
}