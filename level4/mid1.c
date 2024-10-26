#include<stdio.h>


int main(){


    int n;

    scanf("%d",&n);

    int array[n];

    for(int i = 0; i<n; i++){

        scanf("%d",&array[i]);
    }
    int Tcount = 0, ThrCount = 0;

    for(int i = 0; i<n; i++){

            if(array[i] % 2==0 && array[i] %3 == 0){

                Tcount++;

            }else if(array[i] % 2 ==0){


                Tcount++;

            }else if(array[i] % 3==0){


                ThrCount++;

            }

    }


    printf("%d %d",Tcount,ThrCount);




}
