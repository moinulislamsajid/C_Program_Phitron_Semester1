#include<stdio.h>
#include<math.h>


int main(){


    int t;

    scanf("%d",&t);

    for(int i=0; i<t; i++){

        int n;

        scanf("%d",&n);

        int array[n];
        int b[n];

        for(int i = 0; i<n; i++){

            scanf("%d",&array[i]);
            b[i] = array[i];
        }


        int c[n];

        for(int i = 0; i<n - 1; i++){

            for(int j = 0; j<n - 1; j++){

                if(b[j] >b[j+1]){

                   int temp = b[j];

                   b[j] = b[j+1];

                     b[j+1] = temp;

                   }
            }


        }

       for(int i = 0; i<n; i++){


            c[i] = abs(array[i] - b[i]);

       }


        for(int i = 0; i<n; i++){

            printf("%d ",c[i]);
        }

        printf("\n");


    }



}
