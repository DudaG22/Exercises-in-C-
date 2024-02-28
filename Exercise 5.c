#include<stdio.h>

int main(){

int a = 25;
int *pa = &a;
int b = *pa + a;
printf("%d %d %d %d %d %d\n", a, pa, &a, *pa, b, &b);
}

// A) 25 6487572 6487572 25 50 6487568
// B) 
// valor da variavel a, 
// ponteiro contendo o endereço de a, 
// endereço de a, 
// o valor do endereco a, 
// b = soma do valor do endereco a com o valor de a,
// endereco de b.
