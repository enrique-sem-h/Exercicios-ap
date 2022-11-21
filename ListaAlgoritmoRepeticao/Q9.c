/* Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor
lido. */
#include <stdio.h>

int main(){
    int i, num, menorNum, maiorNum;

        scanf("%d", &num);
        menorNum = num;
        maiorNum = num;

    for(i = 2; i <=10; i++){
        scanf("%d", &num);

        if(menorNum > num)
            menorNum = num;
        else if(maiorNum < num)
            maiorNum = num;
    }
    printf("Menor numero digitado: %d\n", menorNum);
    printf("Maior numero digitado: %d", maiorNum);

}