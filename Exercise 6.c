#include <stdio.h>

int main(){
	
	char strf[400], **v[2][2][100];
	int i, j;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("Digite a string:\n");
            scanf("%s", v[i][j]);
        }
    }

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            strcat(strf, v[i][j]);
        }
    }

    printf("Strings concatenadas: %s\n", strf);

    return 0;
}
