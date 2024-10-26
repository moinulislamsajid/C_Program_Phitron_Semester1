#include<stdio.h>

int main(){

    int row,col;

    scanf("%d %d",&row,&col);

      int array[row][col];


        for(int i = 0; i<row; i++){

            for(int j = 0; j<col; j++){

                scanf("%d",&array[i][j]);
            }
        }

        int n = row - 1;

        for(int i = 0; i<col; i++){


            printf("%d ",array[n][i]);
        }

        printf("\n");
        int m = col - 1;
        for(int i = 0; i<row; i++){


            printf("%d ",array[i][m]);
        }




}
