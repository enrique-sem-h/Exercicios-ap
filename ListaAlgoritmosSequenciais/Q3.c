#include <stdio.h>

int main(){
    int num;
    float n1;
    double n2;
    char c;
    char str[250];
    //bool boleano;

    printf("Digite o numero inteiro: ");
    scanf("%d", &num);

    printf("Digite os numeros reais: ");
    scanf("%f %lf", &n1, &n2);

    fflush(stdin);

    printf("Digite o caractere: ");
    scanf("%c", &c);

    printf("Digite a sentenca: ");
    scanf("%s", &str);

    //printf("Digite o valor logico: ");
    //scanf("%b", &boleano);

/////////////////////////////////////////////
    
    printf("\n---------------------------------");
    printf("\nNumero inteiro: %d\n", num);
    printf("Numeros reais: \n%f, \n%lf\n", n1, n2);
    printf("Letra: %c\n", c);
    printf("String: %s\n", str);
    //printf("Logico: %b\n", boleano);
}