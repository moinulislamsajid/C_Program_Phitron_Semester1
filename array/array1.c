#include<stdio.h>
int main(){

    // declared an array

    int arr[5];


    printf("Enter arrays element : ");
    for(int i = 0; i<5; i++){

        scanf("%d",&arr[i]);
    }


    printf("\nArray Element : ");
    for(int i = 0; i<5; i++){

        printf("%d\n",arr[i]);
    }




    return 0;


}