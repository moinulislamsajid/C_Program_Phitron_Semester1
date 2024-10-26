#include<stdio.h>


int main()
{


    int n;
    scanf("%d",&n);



    for(int i = 1; i<=6+n/2; i++)
    {

        for(int j = 1; j<=6+n/2 - i; j++)
        {

            printf(" ");
        }

        for(int j = 0; j<2*i-1; j++)
        {

            printf("*");
        }

        printf("\n");
    }

    for(int i = 0; i<5; i++){


        for(int j = 1; j<= 6+n/2 - (n/2) - 1; j++){


            printf(" ");
        }

        for(int j = 0; j<n; j++){



            printf("*");

        }

        printf("\n");
    }



}









