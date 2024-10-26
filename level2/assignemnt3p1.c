#include<stdio.h>

int main()
{

    int n;

    scanf("%d",&n);

    if(n==1)
    {

        printf("#\n");

    }
    else
    {

        for(int i = 1; i<=n; i++) // no of raw
        {

            for(int j = 0; j<n - i; j++)
            {

                printf(" ");
            }

            for(int j = 0; j<2*i - 1; j++)
            {

               if(i%2!=0){

                printf("#");

               }else{

                   printf("-");

               }


            }

            printf("\n");
        }

        for(int i = n - 1; i>0; i--)
        {

            for(int j = 0; j<n - i; j++)
            {

                printf(" ");
            }

            for(int j = 0; j<2*i - 1; j++)
            {

               if(i%2!=0){

                printf("#");

               }else{

                   printf("-");

               }
            }

            printf("\n");
        }


    }






}
