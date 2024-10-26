#include<stdio.h>


void fun(int ar[],int x, int i){

    if(i==x) return;

    printf("%d ",ar[i]);

    fun(ar,x,i+1);


}

int main(){

    int n;

    scanf("%d",&n);

    int array[n];

    for(int i = 0; i<n; i++){

        scanf("%d",&array[i]);
    }

    // called the function

    fun(array,n,0);



}
