#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz1[4][4], matriz2[4][4], matrizMaior[4][4];
    int i, j;
    
    printf("\n\t\tMatriz [1]\n\n");
    for(i = 0; i < 4; i++){
        printf("\tDigite os 4 valores para a linha %d: ", i);
        for(j = 0; j < 4; j++) {
            scanf("%d%*c", &matriz1[i][j]);   
        }
        printf("\n");
    }

    printf("\n\t\tMatriz [2]\n\n");
    for(i = 0; i < 4; i++){
        printf("\tDigite os 4 valores para a linha %d: ", i);
        for(j = 0; j < 4; j++) {
            scanf("%d%*c", &matriz2[i][j]);   
        }
        printf("\n");
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++) {
            if(matriz1[i][j] > matriz2[i][j]) {

                matrizMaior[i][j] = matriz1[i][j];

            }if (matriz1[i][j] < matriz2[i][j]) {

                 matrizMaior[i][j] = matriz2[i][j];
            
            }if(matriz1[i][j] == matriz2[i][j]){
                matrizMaior[i][j] = matriz1[i][j];
            }  
        }
    }

    printf("\n\t\tMatriz [1]\n");
    for(i = 0 ; i < 4; i++) {
        for(j = 0; j < 4; j++){
            printf("\t %d\t",matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n\t\tMatriz [2]\n");
    for(i = 0 ; i < 4; i++) {
        for(j = 0; j < 4; j++){
            printf("\t %d\t",matriz2[i][j]);
        }
        printf("\n");
    }
    printf("\n\t\tMatriz [3]\n");
    for(i = 0 ; i < 4; i++) {
        for(j = 0; j < 4; j++){
            printf("\t %d\t",matrizMaior[i][j]);
        }
        printf("\n");
    }

    getchar();
 return 0;
}