/* Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são
múltiplos de 3 ou 5. */
#include <stdio.h>

int main(){
    int i, soma = 0;

    for(i = 1000; i >= 0; i--){
        if(i % 3 == 0 && i % 5 != 0){
        printf("%d - m3\n", i);
        soma = soma + i;
        }
        else if(i % 5 == 0){
        printf("%d - m5\n", i);
        soma = soma + i;
        }
    }
        printf("Soma: %d", soma);



}