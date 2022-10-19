/* Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, 
considerando só os seguintes valores: */
#include <stdio.h>

int main(){
    int DDD;

    printf("Por favor informe o DDD: ");
    scanf("%d", &DDD);

    switch(DDD)
    {
        case 61:
        printf("DDD %d: Brasilia", DDD);
        break;
        case 71:
        printf("DDD %d: Salvador", DDD);
        break;
        case 11:
        printf("DDD %d: Sao Paulo", DDD);
        break;
        case 21:
        printf("DDD %d: Rio de Janeiro", DDD);
        break;
        case 32:
        printf("DDD %d: Juiz de Fora", DDD);
        break;
        case 19:
        printf("DDD %d: Campinas", DDD);
        break;
        case 27:
        printf("DDD %d: Vitoria", DDD);
        break;
        case 31:
        printf("DDD %d: Belo Horizonte", DDD);
        break;

        default:
        printf("DDD invalido");
        break;
    }


}