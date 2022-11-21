#include <stdio.h>

int main(){
    int num, sum = 0;
    char option;
    
    do{
        printf("Please insert a number: ");
        scanf("%d", &num);
        sum = sum + num;
        printf("Press y to add more numbers:\n");
        fflush(stdin);
        scanf("%c", &option);
    } while(option == 'y' || option == 'Y');

    printf("sum: %d", sum);

}