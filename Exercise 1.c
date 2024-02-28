#include<stdio.h>

int main(){
	int n1, n2;
	int *pn1, *pn2;
	
	printf("Digite um numero:");
	scanf("%d",&n1);
	
	printf("Digite outro numero:");
	scanf("%d",&n2);
	
	pn1 = &n1;
	pn2 = &n2;
	
	if (pn1 > pn2){
		printf("%d contem o maior endereco: %x",n1,pn1);
	}
	
	if (pn1 < pn2){
		printf("%d contem o maior endereco: %x",n2,pn2);
	}	
}
