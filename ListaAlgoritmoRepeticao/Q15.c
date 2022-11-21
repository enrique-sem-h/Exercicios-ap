/*Apresente um programa que calcule o valor de qualquer Hn. Em matemática, o número harmônico designado por 
Hn define-se como o enésimo termo da série harmônica.*/
#include <stdio.h>

int main(){
    int num;
    float i, somacalc, calc = 0;
    char opt;

    do{
    printf("Digite o numero a ser calculado: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        somacalc = 1/i;
        calc = calc + somacalc;
        printf("1/%.0f\t", i);
    }
        printf("\nHn = %.2f", calc);
        printf("\nDeseja encerrar o programa? (y ou n)\n");
        scanf(" %c", &opt);
    } while(opt == 'n' || opt == 'N');

}