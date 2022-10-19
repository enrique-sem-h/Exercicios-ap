/* Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas,
por exemplo). O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação,
mostrando o resultado. */
#include <stdio.h>

int main()
{
    char op;
    float n1, n2;

    printf("Por favor digite a operacao desejada:\n+ = Adicao\n- = Subtracao\n* = Multiplicacao\n/ = Divisao\n");
    scanf("%c", &op);

    switch (op)
    {
    case '+':
        printf("Operacao selecionada: Adicao");
    break;
    case '-':
        printf("Operacao selecionada: Subtracao");
    break;
    case '*':
        printf("Operacao selecionada: Multiplicacao");
    break;
    case '/':
        printf("Operacao selecionada: Divisao");
    break;

    default:
    printf("Operacao invalida");
    return 0;
    }
 
    printf("\nPor favor digite 2 numeros\n");
    scanf("%f %f", &n1, &n2);

    switch(op)
    {
    case '+':
        printf("%.1f + %.1f = %.1f", n1, n2, n1 + n2);
    break;
    case '-':
        printf("%.1f - %.1f = %.1f", n1, n2, n1 - n2);
    break;
    case '*':
        printf("%.1f x %.1f = %.1f", n1, n2, n1 * n2);
    break;
    case '/':
        printf("%.1f / %.1f = %.1f", n1, n2, n1 / n2);
    break;
    }
}