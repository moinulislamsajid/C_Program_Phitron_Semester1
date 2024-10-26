#include<stdio.h>

int main()
{

    int size,size1;

    printf("Enter the size of arrays : ");
    scanf("%d", &size);

    int number[size];

    printf("Enter arrays element : ");
    for (int i = 0; i < size; i++)
    {

        scanf("%d", &number[i]);
    }

    printf("Enter the size of arrays : ");
    scanf("%d", &size1);

    int number1[size1];

    int ans[size+size1];

     printf("Enter arrays element : ");
    for (int i = 0; i < size1; i++)
    {

        scanf("%d", &number1[i]);
    }



    for(int i = 0; i<size; i++)
    {

        ans[i] = number[i];
    }

    int i = size;

    for(int j = 0; i<size1; j++)
    {

        ans[i] = number1[j];
        i++;
    }


    printf("Print the arrays : ");
    for(int i = 0; i<size+size1; i++)
    {

        printf("%d ",ans[i]);
    }


}
