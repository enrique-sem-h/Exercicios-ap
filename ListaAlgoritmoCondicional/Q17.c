/* Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente 
pelos dois. */
#include <stdio.h>

int main(){
    int num;

    printf("Digite o numero a ser lido: ");
    scanf("%d", &num);

    if((num % 3 == 0) && (num % 5 == 0))
    {
        printf("Erro");
    }
    else if((num % 3 == 0) && (num % 5 != 0))
    {
        printf("O numero %d e divisivel por 3 = %d", num, num / 3);
    }
    else if((num % 3 != 0) && (num % 5 == 0))
    {
        printf("O numero %d e divisivel por 5 = %d", num, num / 5);
    }
    else
        printf("O numero %d nao e divisivel de 3 nem de 5", num);
    




}