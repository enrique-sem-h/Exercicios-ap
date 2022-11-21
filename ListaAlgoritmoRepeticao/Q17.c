/*Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido é primo ou não.*/
#include <stdio.h>

int main(){
    int i, num, primo = 0;
    char op;

    do{
    printf("\nDigite o numero a ser lido: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        if(num % i == 0){
            primo++;
        }
    }
    if(primo == 2){
        printf("\nO numero %d e primo!\n", num);
        primo = 0;
    }else if(primo != 2){
        printf("\nO numero %d nao e primo!\n", num);
        primo = 0;
    }
        printf("Pressione R para repetir o programa!\n");
        scanf(" %c", &op);
    }while(op == 'r' || op == 'R');
}