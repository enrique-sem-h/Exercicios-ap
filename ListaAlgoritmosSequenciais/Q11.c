#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4 * PI * pow(raio, 2);
    volume = (4.0/3) * PI * pow(raio, 3);

    printf("Raio: %.2f\nArea da esfera: %.2f\nVolume da esfera: %.2f", raio, area, volume);
}