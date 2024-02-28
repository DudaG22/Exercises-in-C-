#include <stdio.h>

int main(){
    char senha[12], senhacorreta[12] = "123456";

    printf("Digite sua senha:\n");
    scanf("%s", senha);

    if (strcmp(senha, senhacorreta) == 0){
        printf("Senha valida");
    }else{
        printf("Senha invalida");
    }
    
    return 0;
}
