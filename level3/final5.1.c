#include<stdio.h>

int main()
{

    int n;

    scanf("%d",&n);

    for(int i=0; i<n; i++){

        for(int j = 0; j< n - i; j++){

            printf(" ");
        }

        for(int j = 0; j<i; j++){

            printf("*");
        }

        for(int k = 0; k<i - 1; k++){

            printf("*");
        }

        printf("\n");
    }


    for(int i=0; i<4; i++){

        for(int j = 0; j<5; j++){

            printf(" ");

        }


            printf("**");
            printf("\n");
        }
    }



