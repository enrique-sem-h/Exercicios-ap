/* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o
número digitado ao quadrado e raiz quadrada do número digitado. */
#include <stdio.h>
#include <math.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("Quadrado de %d: %.1f\n", num, pow(num,2));
        printf("Raiz quadrada de %d: %.2f\n", num, sqrt(num));
    }
    else
    printf("esse numero nao e positivo\n");
}