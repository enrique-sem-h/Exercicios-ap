#include <stdio.h>

int main(){
    float a,b;
    int operacao;
    
    printf("Digite o numero da operacao\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n");
    scanf("%d", &operacao);
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    if(operacao == 1){
        printf("\nSelecionado: ADICAO\nResultado: %.1f", a + b);
    }
    else if(operacao == 2){
        printf("\nSelecionado: SUBTRACAO\nResultado: %.1f", a - b);
    }
    else if(operacao == 3){
        printf("\nSelecionado: MULTIPLICACAO\nResultado: %.1f", a * b);
    }
    else if(operacao == 4){
        printf("\nSelecionado: DIVISAO\nResultado: %.1f", a / b);
    }
    else   
    printf("erro: tente novamente");
}