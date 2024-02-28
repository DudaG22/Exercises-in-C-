#include<stdio.h>

void ordemcrescente(int *x1, int *x2, int *x3){
	
	int n1, n2, n3;
	
	if (x1 > x2 && x1 > x3){
		n1 = x1;
		if (x2 > x3){
			n2 = x2;
			n3 = x3;
		} else{
			n2 = x3;
			n3 = x2;
		}
	}else if (x2 > x1 && x2 > x3){
		n1 = x2;
		if (x1 > x3){
			n2 = x1;
			n3 = x3;
		} else{
			n2 = x3;
			n3 = x1;
		}
	}else{
		n1 = x3;
		if (x1 > x2){
			n2 = x1;
			n3 = x2;
		} else{
			n2 = x2;
			n3 = x1;
		}
	}
	printf("%x %x %x2", n3, n2, n1);
}

void main(){
	int *x1, *x2, *x3;
	
	printf("Digite o primeiro valor:\n");
	scanf("%i",&x1); 
	
	printf("Digite o segundo valor:\n");
	scanf("%i",&x2);
	
	printf("Digite o terceiro valor:\n");
	scanf("%i",&x3);
	
	ordemcrescente(&x1,&x2,&x3);
	
}

