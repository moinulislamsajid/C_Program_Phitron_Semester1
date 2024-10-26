#include<stdio.h>

int main()
{


    int size;

    printf("Enter arrays size : ");
    scanf("%d",&size);

    int number[size];
    int count[100] = {0};

    printf("Enter the arrays values : ");
    for(int i = 0; i<size; i++)
    {


        scanf("%d",&number[i]);
    }

    for(int i = 0; i<size; i++)
    {

        if(number[i]==0)
        {

            count[0]++;
        }
        else if(number[i] ==1)
        {

            count[1]++;
        }
        else if(number[i] ==3)
        {

            count[3]++;
        }
        else if(number[i]==4)
        {

            count[4]++;
        }


    }

    printf("\nTotal number of Zero : %d",count[0]);
    printf("\nTotal number of one : %d",count[1]);
    printf("\nTotal number of Three : %d",count[3]);
    printf("\nTotal number of Four : %d",count[4]);



    // for technique

    for(int i =0; i<size; i++){

        int val = number[i];
        count[val]++;

    }




    return 0;



}
