#include<stdio.h>


void caleven(int ar[],int x, int i)
{

    if(i>=0)
    {

        if(i % 2 == 0)
        {


            printf("%d ",ar[i]);

        }

        caleven(ar,x,i-1);
    }






}

int main()
{

    int n;

    scanf("%d",&n);

    int array[n];

    for(int i = 0; i<n; i++)
    {

        scanf("%d",&array[i]);
    }

    // called the function

    caleven(array,n,n-1);


}
