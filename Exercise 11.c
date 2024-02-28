#include <stdio.h>
#include <math.h>

void calcula_2grau(float a, float b, float c, float *delta, float *x1, float *x2){
    *delta = (b * b) - (4 * a * c);
    if (*delta < 0){
        printf("Delta: %f\n", delta);
        printf("Nao existem raizes reais\n");
        
    }else{
        *x1 = (-b + sqrt(*delta)) / (2 * a);
        *x2 = (-b - sqrt(*delta)) / (2 * a);
        
        printf("Delta: %f\n", *delta);
        printf("Raiz 1: %f\n", *x1);
        printf("Raiz 2: %f\n", *x2);
    }
}
int main(){
    float a, b, c, delta, x1, x2;
    
    printf("Digite o valor de A \n");
    scanf("%f", &a);
    
    printf("Digite o valor de B \n");
    scanf("%f", &b);
    
    printf("Digite o valor de C \n");
    scanf("%f", &c);
    
    calcula_2grau(a, b, c, &delta, &x1, &x2);
    
    return 0;
}

