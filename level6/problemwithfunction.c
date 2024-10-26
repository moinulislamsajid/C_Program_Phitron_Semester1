#include<stdio.h>

int main(){

    int array[3];
    int oarray[3];

    for(int i = 0; i<3; i++){

        scanf("%d",&array[i]);

        oarray[i] = array[i];
    }

    for(int i = 0; i<3; i++){

        for(int j =0; j<2-i; j++){

            if(array[j] > array[j+1]){

                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }


    for(int i = 0; i<3; i++){

        printf("%d\n",array[i]);
    }

    printf("\n");

    for(int i = 0; i<3; i++){

        printf("%d\n",oarray[i]);
    }






}



