#include<stdio.h>

void fun(int a[], int r){

        for(int i = 0; i<r; i++){

            printf("%d ",a[i]);
        }

        printf("\n");

}

int main(){

    int array[5] = {1,2,3,4,5};

    fun(array,5);
    int size = sizeof(array)/sizeof(int);

    printf("%d ",size);


}
