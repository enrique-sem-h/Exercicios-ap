/* Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 
considerando números maiores que 0. */
#include <stdio.h>

int main(){
    int i;

    for(i = 1; i <= 5; i++)
        printf("%d x 3 = %d\n", i, i * 3);


}