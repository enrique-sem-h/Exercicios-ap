/*Elabore um algoritmo que receba o primeiro nome, o(s) nome(s) do meio, e o ultimo nome do usuário.
 Concatene os dados e imprima o valor final.*/
#include <stdio.h>
#include <string.h>

int main(){
    char nome[50], nomeMeio[50], sobrenome[50];

    printf("Nome: ");
    scanf("%s", &nome);
    fflush(stdin);
    printf("Nome do meio: ");
    scanf("%s", &nomeMeio);
   // fgets(nomeMeio, 10, stdin);
    printf("Sobrenome: ");
    fgets(sobrenome, 10, stdin);

    strcat(nome, nomeMeio);
    strcat(nome, sobrenome);

    printf("%s", nome);


}