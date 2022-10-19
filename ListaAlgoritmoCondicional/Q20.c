#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float delta, r1, r2;
    
    printf("Digite o valor para a: ");
    scanf("%f", &a);

    printf("Digite o valor para b: ");
    scanf("%f", &b);

    printf("Digite o valor para c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - (4*a*c);
    r1 = (-b + sqrt(delta)) / (2 * a);
    r2 = (-b - sqrt(delta)) / (2 * a);

    if(a == 0){
        printf("Nao e equacao de segundo grau");
    }else if(delta < 0){
        printf("nao existe raiz");
    }else if(delta == 0 ){
        printf("Raiz Unica: %.2f", r1);
    }else if(delta > 0){
        printf("Raiz positiva: %.1f\nRaiz negativa: %.1f", r1, r2);
    }


}