#include <stdio.h>

int main(){
    int a, b, x;

    printf("Digite o primeiro inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo inteiro: ");
    scanf("%d", &b);

    x = a + b;

    printf("%d + %d = %d", a,b,x);
}