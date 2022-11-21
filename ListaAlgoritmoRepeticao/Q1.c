/* Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem 
crescente. */
#include <stdio.h>

int main(){
    int i, num;

    printf("Digite o valor de n: ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++){
        printf("%d\n", i);
    }

}