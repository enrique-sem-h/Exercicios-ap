#include <stdio.h>
#include <string.h>

int main(){
    char senha1[13], senha2[13];
    
    printf("Digite sua senha: ");
    scanf("%s", &senha1);
    printf("Confirme sua senha: ");
    scanf("%s", &senha2);

    if(strncmp(senha1, senha2) == 0)
        printf("OK!\n");
    else
        printf("As senhas devem ser iguais\n");

    printf("Qcrt: %d", strlen(senha1));

}