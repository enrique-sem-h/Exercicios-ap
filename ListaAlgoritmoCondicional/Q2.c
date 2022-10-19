/* Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois
números forem iguais, imprima a mensagem “Números iguais”.*/
#include <stdio.h>

int main(){
    float n1, n2;

    printf("Numero 1: ");
    scanf("%f", &n1);

    printf("Numero 2: ");
    scanf("%f", &n2);

    if(n1 > n2)
    printf("O numero 1(%f) e maior que o numero 2(%f)\n", n1, n2);
    else if (n1 == n2)
    printf("Numeros iguais\n");
    else 
    printf("O numero 2(%f) e maior que o numero 1(%f)\n", n2, n1);
}