#include <stdio.h>
#define ROLO 50

int main()
{
    float metros, metrosAvulsos;
    int rolos;

    printf("Quantos metros de fio voce precisa?\n");
    scanf("%f", &metros);

    rolos = metros / ROLO;
    metrosAvulsos = metros - rolos * ROLO;

    if(rolos == 0)
    printf("Voce precisa de %.2f metros avulsos", metrosAvulsos);
    else if(rolos == 1)
    printf("Voce precisa de %d rolo e %.2f metros avulsos", rolos, metrosAvulsos);
    else
    printf("Voce precisa de %d rolos e %.2f metros avulsos", rolos, metrosAvulsos);
}