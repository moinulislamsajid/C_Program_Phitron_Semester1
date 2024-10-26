#include<stdio.h>

int main(){


    int row,col;

    scanf("%d %d",&row,&col);

    int element = row*col;

    int number[row][col];

    for(int i =0; i<row; i++){

        for(int j = 0; j<col; j++){

            scanf("%d",&number[i][j]);
        }

    }


    int count = 0;

    for(int i =0; i<row; i++){

        for(int j = 0; j<col; j++){

            if(number[i][j] == 0){

                count++;
            }
        }

    }


    if(count==element){

        printf("This is a zero matrix");
    }else{

        printf("This is not a zero matrix");

    }



}
