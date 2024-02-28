#include <stdio.h>

int encChar(const char* str, char caractere){
    int i;

    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == caractere){
            return i;
        }
    }

    return -1;
}

int main(){
    char str[50], caractere;
    int posicao;

    printf("Digite a string:\n ");
    scanf("%s", str);

    printf("Digite o caractere que quer checar:\n ");
    scanf(" %c", &caractere);

    posicao = encChar(str, caractere);

    if (posicao != -1){
        printf("Caractere '%c' encontrado na posição %d", caractere, posicao);
    } else{
        printf("Caractere '%c' não encontrado na string\n", caractere);
    }

    return 0;
}
