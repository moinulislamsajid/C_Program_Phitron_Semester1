#include<stdio.h>


void fun(int x){


    if(x==0) return;

    int c = x%10;

    fun(x/10);

    printf("%d ",c);



}




int main(){


        int t;

        scanf("%d",&t);

        for(int i =0; i<t; i++){

            int n;
            scanf("%d",&n);
            fun(n);
            if(n==0){

                printf("0");
            }

            printf("\n");
        }





}
