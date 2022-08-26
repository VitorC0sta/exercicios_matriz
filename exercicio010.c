#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz[3][3],i,j, soma = 0;

    for (i = 0; i < 3; i++) {
        printf("\n\tlinha[%d] digite 3 valores:", i);
        for ( j = 0; j < 3; j++) {
            scanf("%d%*c", &matriz[i][j]);

        }
        
    }

    
    for (i = 0; i < 3; i++) {
        printf("\t");
        for ( j = 0; j < 3; j++) {
            printf(" %d\t", matriz[i][j]);

        }
        printf("\n");
    }
    
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
           
            if(j == i) {
                soma = soma + matriz[i][j];
            }

        }
        
    }

    printf("\n\n\tA soma dos elementos da diagonal principal foi: %d", soma);

    getchar();
return 0;   
 
}