#include<stdio.h>


    void evenindex(int ar[], int x,int i){


        if()

        if(ar[x]%2 == 0){

            evenindex(ar,x-1);
            printf("%d ",x);
        }

}

int main(){


        int n;

        scanf("%d",&n);

        int array[n];


        for(int i = 0; i<n; i++){

            scanf("%d",&array[i]);
        }


         evenindex(array,n,0);

         return 0;


     }




