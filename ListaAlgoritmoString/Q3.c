/* Elabore um algoritmo que receba os dados: nome completo, e-mail e endereço de um usuário 
e faça um backup de todos eles em novas variávies. */
#include <stdio.h>
#include <string.h>

int main(){
    char nomeComp[30], email[50], endereco[50];
    char backNome[30], backEmail[50], backEndereco[50];

    printf("Digite seu nome completo: ");
    fgets(nomeComp, 30, stdin);
    printf("Digite seu email: ");
    scanf("%s", email);
    fflush(stdin);
    printf("Digite seu endereco: ");
    fgets(endereco, 50, stdin);

    strcpy(backNome, nomeComp);
    strcpy(backEmail, email);
    strcpy(backEndereco, endereco);

    printf("\nSeu nome: %sSeu email: %s\nSeu endereco: %s", backNome, backEmail, backEndereco);


}