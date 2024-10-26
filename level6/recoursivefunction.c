#include<stdio.h>


    void fun(int ar[], int x){

            for(int i = 0; i<x; i++){

                scanf("%d",&ar[i]);

            }


            for(int i = x; i>0; i--){

                if(ar[i] % 2 ==0){

                    fun(ar,x+1);
                    printf("%d ",ar[i]);
                }
            }


    }


int main(){

    int n;

    scanf("%d",&n);

    int array[n];

    fun(array,n);



}
