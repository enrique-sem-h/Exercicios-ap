#include <stdio.h>

int main(){
    int a;
    char c, nome[20];

    printf("int: ");
    scanf("%d", &a);

    fflush(stdin);
    printf("char: ");
    scanf("%c", &c);

    printf("nome: ");
    fgets(nome, 20, stdin);

    printf("\n\nint: %d, char: %c, nome: %s", a, c, nome);
}