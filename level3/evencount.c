#include<stdio.h>


int main(){


        int n;

        scanf("%d",&n);

        int array[n];

        for(int i = 0; i<n; i++){

            scanf("%d",&array[i]);
        }


        for(int i = n; i>0; i--){

            if(array[i] %2 ==0){

                printf("%d ",i);
            }
        }


}
