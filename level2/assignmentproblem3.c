#include<stdio.h>

int count_before_one(int ar[], int x)
{

    for(int i = 0; i<x; i++)
    {

        scanf("%d",&ar[i]);
    }

    int count = 0;


    for(int i = 0; i<x; i++)
    {

        if(ar[i] == 1)
        {
            break;

        }else{

             count++;

        }

    }


    return count;



}

int main()
{

    int n;

    scanf("%d",&n);

    int array[n];

    int ans = count_before_one(array,n);

    printf("%d",ans);



}
