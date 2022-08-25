#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int matriz[5][5] = {0,0,0,0,0};
    int i,j;

    for(i = 1; i < 5; i++) {
            printf("\tDigite 5 valores para linha %d: ", i);
        for(j = 0; j < 5; j++){
            scanf("%d%*c", &matriz[i][j]);
        }
    }

     for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++){
            printf("\t%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}