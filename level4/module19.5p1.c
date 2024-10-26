#include<stdio.h>

int main()
{

    int a,b;

    scanf("%d %d",&a,&b);


    if(a == 1 && b==1)
    {

        printf("1");

    }
    else
    {

        int  c = 100 - a;

        float  d =  (float) b*a/c;

        float ans = b+d;
        printf("%.2f\n ",ans);


    }










}
