/* Faça um programa que leia um número inteiro positivo N
 e imprima todos os números naturais de 0 até N em ordem decrescente. */

#include <stdio.h>

int main(){
    int i, num;

    printf("Por favor, digite um valor para N: ");
    scanf("%d", &num);

    for(i = num; i >= 0; i--)
        printf("%d\n", i);

}