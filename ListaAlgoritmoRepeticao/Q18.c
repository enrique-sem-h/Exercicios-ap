/*Faça um programa que calcule e escreva o valor de S:*/
#include <stdio.h>

int main(){
    int i;
    float somaOperacao = 0, x = 1, y = 1, operacao;

    for (i=1; i <= 55; i++){
        operacao = x/y;
        somaOperacao = somaOperacao + operacao;
        
        if(i < 55)
           printf("%d/%d + ", (int)x, (int)y);
        else if(i == 55)
            printf("%d/%d\n", (int)x, (int)y);
        
        x = x + 2;
        y++;
    }

    printf("S = %.2f", somaOperacao);
}