

#include<stdio.h>

int main(){

    int size,index;

 printf("Enter the size of arrays : ");
    scanf("%d",&size);

    int number[size+1];

    printf("Enter arrays element : ");
    for(int i = 0; i<size; i++){

        scanf("%d",&number[i]);
    }

    printf("Enter the delete element  : ");
    scanf("%d",&index);

    for(int i = index ; i<size -1; i++){

        number[i] = number[i+1];
    }

    size--;

    printf("after delete  arrays : ");
    for(int i = 0; i<size; i++){

        printf("%d ",number[i]);
    }



}
