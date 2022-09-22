#include <stdio.h>

int main(){
    int a, b, c, d;

    printf("Digite 4 numeros inteiros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    float diferenca;
    diferenca = (a * b) - (c * d);

    printf("DIFERENCA = (%d * %d - %d * %d)\n", a,b,c,d);
    printf("DIFERENCA = %.2f", diferenca);

}