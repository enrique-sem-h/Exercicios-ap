#include <stdio.h>
#define comissao 0.15

int main(){
    char nome[100];
    float salario, vendas;

    printf("Digite o nome do funcionario: ");
    scanf("%s", &nome);

    printf("Qual o saraio desse funcionario (R$)?\n");
    scanf("%f", &salario);

    printf("Quanto %s fez em vendas (R$)?\n", nome);
    scanf("%f", &vendas);

    printf("\n%s deve receber %.2f esse mes", nome, salario + (vendas * comissao));

}