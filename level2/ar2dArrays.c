#include<stdio.h>

int main()
{
    int row,col;

    scanf("%d %d",&row,&col);

    int number[row][col];

    // for input

    for(int i = 0; i<row; i++){

        for(int j = 0; j<col; j++){

            scanf("%d",&number[i][j]);

        }
    }



    // for output

    for(int i = 0; i<row; i++){

        for(int j = 0; j<col; j++){

            printf("%d ",number[i][j]);

        }

        printf("\n");
    }

    int r;

    printf("Enter your row : ");

    scanf("%d",&r);

    for(int i = 0; i<col; i++){

        printf("%d ",number[r][i]);
    }




    int c;

    printf("\nEnter your column : ");
    scanf("%d",&c);

    for(int i =0l; i<row; i++){

        printf("%d ",number[i][c]);
    }


}
