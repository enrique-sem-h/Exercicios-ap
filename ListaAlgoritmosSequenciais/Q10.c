#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2;

    printf("Digite os valores para o primeiro ponto (x1,y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite os valores para o segundo ponto (x2,y2): ");
    scanf("%f %f", &x2, &y2);

    float dist;
    dist = sqrt(pow((x2-x1), 2) + pow((y2 - y1), 2));

    printf("distancia entre os pontos (%.0f,%.0f) e (%.0f,%.0f): %.4f", x1,y1,x2,y2, dist);

}