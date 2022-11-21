/* Faça um programa que leia 10 inteiros e imprima sua média. */
#include <stdio.h>

int main(){
    int i, val, media = 1, calc = 0;

    for(i = 1; i <= 10; i++){
        printf("Digite o %dº numero a ser calculado: ", i);
        scanf("%d", &val);
        calc = val + calc;
        media = calc / 10;
    }
    printf("Soma: %d\nMedia: %d", calc, media);


}