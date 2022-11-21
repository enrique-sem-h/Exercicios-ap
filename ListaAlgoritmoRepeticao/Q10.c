/* Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média. */
#include <stdio.h>

int main(){
    int i, num, calc = 0, media;

    for(i = 1; i <=10;){
    printf("Digite o %dº numero positivo: ", i);
    scanf("%d", &num);

    if(num > 0){
        calc = num + calc;
        media = calc / 10;
        i++;
    } else{
        printf("Esse numero e negativo!\n");
    }
    }
    printf("\nMedia: %d", media);

}