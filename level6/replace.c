#include<stdio.h>

int main(){


    int n,index,value;

    scanf("%d",&n);

    int arr[n];

    for(int i = 0; i<n; i++){

        scanf("%d",&arr[i]);
    }

    scanf("%d",&index);

    scanf("%d",&value);


    arr[index] = value;




    for(int i = n - 1; i>=0; i--){

        printf("%d ",arr[i]);
    }



}
