/* Elabore um algoritmo que receba o nome completo de um cliente e imprima a quantidade de caracteres digitados. */
#include <stdio.h>
#include <string.h>

int main(){
    char nomeCompleto[30];

    printf("Digite seu nome completo: ");
  //  scanf("%s", &nomeCompleto);
    fgets(nomeCompleto, 30, stdin);

    printf("\nNome Completo: %s\nQuantidade de caracteres: %d", nomeCompleto, strlen(nomeCompleto) - 1);


}