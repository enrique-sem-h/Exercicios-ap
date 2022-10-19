/* Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto
sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o
programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado
digitado não for válido, mostrará uma mensagem de erro. */
#include <stdio.h>
#include <string.h>
#define MG 0.07
#define SP 0.12
#define RJ 0.15
#define MS 0.08

int main(){
    int estado;
    float valorProd;

    printf("Para qual estado sera enviado o produto?\n1. MG\n2. SP\n3. RJ\n4. MS\n");
    scanf("%d", &estado);

    printf("Qual o valor do produto(em R$)?\n");
    scanf("%f", &valorProd);

    printf("\nvalor do produto: R$%.2f\n", valorProd);
    
    if(estado == 1){
        float impMG = valorProd + (valorProd * MG);
        printf("Valor do produto para MG: %.2f", impMG);
    }
    else if(estado == 2){
        float impSP = valorProd + (valorProd * SP);
        printf("valor do produto para SP: %.2f", impSP);
    }
    else if(estado == 3){
        float impRJ = valorProd + (valorProd * RJ);
        printf("valor do produto para RJ: %.2f", impRJ);
    }
    else if(estado == 4){
        float impMS = valorProd + (valorProd * MS);
        printf("valor do produto para MS: %.2f", impMS);
    }
    else
        printf("erro 404: estado nao encontrado");
}