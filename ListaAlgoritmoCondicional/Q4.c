/* Faça um programa que leia o salário de um trabalhador e o valor da prestação de um
empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não
concedido.”, caso contrário, imprima: “Empréstimo concedido.” */
#include <stdio.h>

int main(){
    float salario, prest;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Qual o valor das prestacoes de seu emprestimo?\n");
    scanf("%f", &prest);

    if(prest > (salario * 0.2))
        printf("Empréstimo não concedido\n");
    else
        printf("Emprestimo concedido");
}