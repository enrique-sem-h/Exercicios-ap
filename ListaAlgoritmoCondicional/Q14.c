/* Usando o comando switch, escreva um programa que leia um inteiro entre  e 7 e imprima o dia da semana
correspondente a esse número. Isto é, domingo, se , segunda-feira, se 2, e assim por diante. */
#include <stdio.h>

int main()
{
    int dia;

    printf("Digite o numero do dia: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Dia: Domingo");
        break;
    case 2:
        printf("Dia: Segunda-Feira");
        break;
    case 3:
        printf("Dia: Terca-Feira");
        break;
    case 4:
        printf("Dia: Quarta-Feira");
        break;
    case 5:
        printf("Dia: Quinta-Feira");
        break;
    case 6:
        printf("Dia: Sexta-Feira");
        break;
    case 7:
        printf("Dia: Sabado");
        break;

    default:
        printf("Erro: Dia invalido");
        break;
    }
}