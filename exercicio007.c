#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{
    int i,j;
    int matriz[10][10];
    //double i3 = 3*i, j4 = 4*i, i5 = 5*i;


    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(i < j){
                matriz[i][j] = 2*i + 7*j -2;
            } if(i == j){
               matriz[i][j] =  pow(3*i,2) - 1;
            } if( i > j) {
                matriz[i][j] = pow(4*i,3) - pow(5*j,2) + 1;
            }
        }
    }

    printf("\t\t\tMatriz\n\n\n");
    for(i = 0; i <10; i++) {
        printf("\t");
        for(j = 0; j < 10; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n\n");
    }
    
    getchar();
 return 0;
}