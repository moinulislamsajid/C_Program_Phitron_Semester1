#include<stdio.h>

int main(){


        int n,k;

        scanf("%d %d",&n,&k);

        int array[n];

        if(n == 1 && k == 1){

            printf("1");

        }else{

             for(int i = 0; i<n; i++){

            scanf("%d",&array[i]);
        }

        for(int i = 0; i<n - 1; i++){

            for(int j = 0; j<n - 1; j++){

                if(array[j] < array[j+1]){

                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }

     long long int sum = 0;

     //printf("%d ",k);

     for(int i = 0; i<k; i++){

            sum = sum + array[i];



     }

     printf("%lli\n",sum);
        }



}
