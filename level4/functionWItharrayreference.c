#include<stdio.h>

void fun(int* ar, int n){


        ar[0] = 1000;



}


// to prove string

void fun1(char * arr){


    arr[0] = 'x';


}








int main()
{

    int arr[5] = {1,3,5,6,7};

    fun(arr,5);

    for(int i = 0; i<5; i++){

        printf("%d ",arr[i]);
    }

    printf("\n");


    char arrrr[20] = "Sajid";

    fun1(arrrr);

    for(char i = 0; arrrr[i] != '\0'; i++){


        printf("%c ",arrrr[i]);
    }



}
