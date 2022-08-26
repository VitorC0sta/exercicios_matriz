#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5];
    int valorX,i,j,posL, posC, valorExistente;

    for(i = 0; i < 5; i++) {
            printf("Digite 5 valores para a linha %d: ", i);
        for(j = 0; j < 5; j++) {
            scanf("%d%*c", &matriz[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {

            printf(" %d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\tDigite um valor para procurar na matriz: ");
    scanf("%d%*c", &valorX);

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {

            if(matriz[i][j] == valorX) {
                posL = i;
                posC = j; 
                valorExistente = 1;
            }   
        }
    }

    if(valorExistente == 1){
        printf("\n\tValor %d encontrado na pos: %dx%d", valorX, posL,posC);
    } else {
        printf("\n\tValor não encontrado.");
    }
    



 return 0;
}