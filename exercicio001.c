#include <stdio.h>
#include <stdlib.h>

void matriz();

int main()
{


 matriz();
 
 getchar();
 return 0;

}

void matriz()
{
 int i,j, cont = 0;

 int matriz[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
 for(i = 0; i < 4; i++){
    printf("\t\t");
    for(j = 0; j < 4; j++){
        printf("%d\t", matriz[i][j]);
        if(matriz[i][j] > 10){
            cont++;
        }
    }
        printf("\n");
 }
 printf("\n\tValores > 10 na matriz: %d", cont);  

}