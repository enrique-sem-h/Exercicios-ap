/* Faça um programa que calcule e mostre a soma dos 50 primeiros números pares */
#include <stdio.h>

int main(){
    int i, soma = 0;

    for(i = 0; i <= 100; i = i + 2){
        printf("%d\n", i);
        soma = i + soma;
    }
    printf("\nSoma: %d", soma);


}