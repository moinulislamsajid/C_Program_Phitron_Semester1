#include<stdio.h>

void change_it(int ar[],int x){

        for(int i = 0; i<x; i++){

            scanf("%d",&ar[i]);
        }

        //int len = sizeof(ar)/sizeof(int);

        //printf("%d",len);

        //printf("%d",x);

        //int len = x;

        ar[x-1] = 100;

        for(int i = 0; i<x; i++){

            printf("%d ",ar[i]);
        }


}


int main(){

    int n;

    scanf("%d",&n);

    int array[n];

    change_it(array,n);


}
