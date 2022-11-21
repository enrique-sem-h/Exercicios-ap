/* Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e
apresente o resultado na tela. */
#include <stdio.h>

int main(){
    int i, val, soma = 0;

    for(i = 1; i <=10; i++){
        printf("Por favor digite o %dº numero a ser somado: ", i);
        scanf("%d", &val);
        soma = val + soma;
    }
    printf("Soma: %d", soma);


}