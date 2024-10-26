#include<stdio.h>
#include<limits.h>


    int fun(int ar[], int x, int i){


            if(i==x){

                return INT_MIN;
            }





           int max =  fun(ar,x,i+1);


            if(ar[i] > max){

               return ar[i];

            }else{

                return max;
            }




        return max;


    }




int main(){


    int n;

    scanf("%d",&n);

    int array[n];

    for(int i =0; i<n; i++){

        scanf("%d",&array[i]);
    }

    int ans = fun(array,n,0);

    printf("%d\n",ans);



}
