#include <stdio.h>

int main(){
    int alunos, i;
    float *nota;

    printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &alunos);

    nota = (float*)malloc(alunos*sizeof(float));

    for(i = 0; i < alunos; i++){
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota[i]);
    }

    printf("notas:\n");
    
    for(i = 0; i < alunos; i++){
        printf("%.1f\n", nota[i]);
    }

    free(nota);
    
    return 0;
}
