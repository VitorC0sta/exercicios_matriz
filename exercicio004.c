#include <stdio.h>
#include <stdlib.h>

int main() {

    int matriz[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i,j, numMaior;
    int posL, posC;

    numMaior = matriz[0][0];

    for(i = 0; i < 4 ; i++) {
        for(j = 0; j < 4; j++) {

            if(matriz[i][j] > numMaior) {
                numMaior = matriz[i][j];
                posL = i;
                posC = j;
            }
            printf(" %d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\tO maior [%d] valor esta na pos. %d%d.", numMaior,posL,posC);

    getchar();
 return 0;   
}