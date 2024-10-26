#include<stdio.h>


int main()
{


    int t,s,x;

    scanf("%d",&t);

    int count=0;




    for(int i = 0; i<t; i++)
    {

        scanf("%d",&s);


        int array[s];

        for(int i = 0; i<s; i++)
        {

            scanf("%d",&array[i]);
        }


        scanf("%d",&x);

        for(int i=0; i<s; i++)
        {

            if(array[i] == x)
            {

                count++;
                break;

            }

        }




    }


    for(int i = 0; i<t; i++){

        if(count>0) {

            printf("YES\n");

        } else {

            printf("NO\n");
        }
    }





    }



