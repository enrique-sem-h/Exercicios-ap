/* Faça um programa que leia um número inteiro e verifique se esse número é par ou
ímpar. */
#include <stdio.h>

int main(){
    int num;

    printf("Digite o Numero: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    printf("O numero %d e par", num);
    else
    printf("O numero %d e impar", num);
}