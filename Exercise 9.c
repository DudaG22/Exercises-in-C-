#include <stdio.h>
#include <math.h>

void extremos(int *vet, int tam, int *maior, int *menor){
     *maior = vet[0];
     *menor = vet[0];
     int i;
     
     for (i = 1; i < tam; i++){
        if (vet[i] > *maior) {
            *maior = vet[i]; 
        }
        if (vet[i] < *menor) {
            *menor = vet[i];
        }
    }
    printf("O tamanho do vetor eh %d\nO maior numero contido no vetor e seu endereco eh %d %x\nO menor numero contido no vetor e seu endereco eh %d %x", tam, *maior, &maior, *menor, &menor);
    
}


int main (){
    int vet[] = {3, 7, 8, 2};
    int tam = sizeof(vet) / sizeof(vet[0]);
    int maior, menor;
    
    extremos(vet, tam, &maior, &menor);
    return 0;
}
