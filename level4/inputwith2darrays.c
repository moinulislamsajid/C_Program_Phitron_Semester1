#include<stdio.h>

int main(){

    int row,col;

    scanf("%d %d",&row,&col);

    int a[row][col];

    for(int i=0; i<row; i++){

        for(int j=0; j<col; j++){


            scanf("%d",&a[i][j]);
        }


    }

    // output

    printf("Output of the arrays : ");

    for(int i=0; i<row; i++){


            printf("%d ",a[0][i]);



    }





}

