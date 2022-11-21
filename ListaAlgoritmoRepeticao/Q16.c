/*Escreva um programa que leia um número inteiro 
positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:*/
#include <stdio.h>

int main(){
	int i, j=1, n;

    printf("Digite o numero: ");
	scanf("%d", &n);
    
    for (i=1; i<=(n*(n+1))/2; i++){
        printf("%d ",i);
        if(i==(j*(j+1))/2){
            printf("\n");
            j++;
        }
    }
}

/*int main(){
    int i, num;

    printf("Digite o numero: ");
    scanf("%d",&num);

    for(i = 1; i <= num; i++){
        printf("%d\n", );

    }



}*/