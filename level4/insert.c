#include<stdio.h>

int main(){

    int size,index,value;

    printf("Enter the size of arrays : ");
    scanf("%d",&size);

    int number[size+1];

    printf("Enter arrays element : ");
    for(int i = 0; i<size; i++){

        scanf("%d",&number[i]);
    }

    printf("Enter the index : ");
    scanf("%d",&index);

    printf("\nEnter the value you have insert : ");
    scanf("%d",&value);

    for(int i = size; i>index; i--){

        number[i] = number[i-1];
    }
    number[index] = value;
    size++;

    printf("Insert arrays : ");
    for(int i = 0; i<size; i++){

        printf("%d ",number[i]);
    }


}
