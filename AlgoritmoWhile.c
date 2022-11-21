/*#include <stdio.h>

int main(){
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    while(idade < 18){
        printf("Idade Invalida, tente novamente: ");
        scanf("%d", &idade);
    }

    printf("Idade aceita, obrigado!");
}*/
#include <stdio.h>

int main(){
    int idade;


    do{
        printf("Digite a idade: ");
        scanf("%d", &idade);
    }while(idade < 18);

    printf("Idade aceita, obrigado!");



}