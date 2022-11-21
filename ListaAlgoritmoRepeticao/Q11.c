/*Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os
divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/
#include <stdio.h>

int main(){
    int i, j, num, resultado = 0;

    printf("Digite o numero a ser calculado: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    if(num % i == 0){
        printf("%d\n", i);
    }

    for(j = 2; j <= num/2; j++){
    if(num % j == 0){
    resultado++;
    break;
    }
    }
    if(resultado == 0)
    printf("\nO numero %d eh primo!", num);
}