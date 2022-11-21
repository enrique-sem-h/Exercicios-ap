/*Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. 
O programa tem de retornar o maior e o menor número lido.*/
#include <stdio.h>

int main(){
    int maior, menor, valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    menor = valor;
    maior = valor;

    while(valor > 0){
        printf("Digite outro valor: ");
        scanf("%d", &valor);

        if(valor < menor)
            menor = valor;
        else if(valor > maior)
            maior = valor;

    }
    printf("Leitura finalizada!\nMenor valor digitado: %d\nMaior valor digitado: %d", menor, maior);

}