#include<stdio.h>

 void dosum(int ar[],int x, int i){

        static int  sum = 0;



        if(i==x) {

            printf("%d\n",sum);
            return;
        }





         sum = sum + ar[i];
         dosum(ar,x,i+1);



 }


int main(){

    int n;

    scanf("%d",&n);

    int array[n];

    for(int i = 0; i<n; i++){

        scanf("%d",&array[i]);
    }

    // called the method

    dosum(array,n,0);


}
