#include<stdio.h>
#include<limits.h>


void max_min(int ar[],int x){



    for(int i = 0; i<x; i++){

        scanf("%d",&ar[i]);
    }


    int max = INT_MIN,min = INT_MAX;


    for(int i = 0; i<x; i++)
    {

        if(ar[i] > max){

            max = ar[i];
        }
    }

     for(int i = 0; i<x; i++)
    {

        if(ar[i] < min){

            min = ar[i];
        }
    }



    printf("%d %d",min,max);



}

int main(){

    int n;

    scanf("%d",&n);

    int array[n];

    max_min(array,n);




}




