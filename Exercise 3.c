#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas, colunas, i, j;
    float **mat1, **mat2, **matsoma;

    printf("Digite a quantidade de linhas:\n ");
    scanf("%d", &linhas);
    
    printf("Digite a quantidade de colunas:\n ");
    scanf("%d", &colunas);
    
    mat1 = malloc(linhas * sizeof (float*)) ;
    
    for (i=0; i < linhas; i++){
        mat1[i] = malloc(colunas * sizeof (float));
    }
   
    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++){
            float valor1;
            printf("Digite o valor da posicao i=%d j=%d da matriz 1:\n", i+1, j+1);
            scanf("%f", &valor1);
            mat1[i][j] = valor1;
        }
    }

    mat2 = malloc(linhas * sizeof (float*)) ;
    
    for (i=0; i < linhas; i++){
        mat2[i] = malloc(colunas * sizeof (float));
    }
    
    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++){
            float valor2;
            printf("Digite o valor da posicao i=%d j=%d da matriz 2:\n", i+1, j+1);
            scanf("%f", &valor2);
            mat2[i][j] = valor2;
        }
    }
    
    matsoma = malloc(linhas * sizeof (float*));
    
    for (i=0; i < linhas; i++){
        matsoma[i] = malloc(colunas * sizeof (float));
    }
    
    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++){
            matsoma[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("Matriz:\n");
    
    for(i=0; i < linhas; i++) {
      for(j=0; j < colunas; j++) {
         printf("%.0f |", matsoma[i][j]);
      }
      printf("\n");
   }

    free(mat1);
    free(mat2);
    free(matsoma);
    
    return 0;
}

