#include <stdio.h>

int main(){
    int a, b, prod;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    prod = a * b;

    printf("produto de %d por %d = %d", a,b,prod);
}