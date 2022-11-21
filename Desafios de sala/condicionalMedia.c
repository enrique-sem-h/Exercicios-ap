#include <stdio.h>

int main(){
    double n1, n2, media;

    printf("Digite a nota 1 e a nota 2\n");
    scanf("%lf%lf", &n1, &n2); // scanf multiplo

    media = (n1 + n2) / 2;

    if (media >= 9)
    printf("Parabens, voce foi aprovado com media: %.1lf", media);
    else
    printf("Voce foi reprovado, sua media e: %.1lf", media);
}