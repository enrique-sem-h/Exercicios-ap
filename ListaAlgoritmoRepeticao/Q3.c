/* Faça um programa que leia um número inteiro N e depois 
imprima os N primeiros números naturais ímpares (sem usar comando condicional). */
#include <stdio.h>

int main(){
    int i, num;

    printf("Digite um valor para comecar: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i = i + 2)
    {
        printf("%d\n", i);
    }
    

}