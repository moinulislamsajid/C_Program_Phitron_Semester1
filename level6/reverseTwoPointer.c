#include<stdio.h>

int main(){


    int size;
    printf("Enter the size of arrays : ");
    scanf("%d",&size);

    int number[size];

    printf("Arrays value : ");
    for(int i = 0; i<size; i++){

        scanf("%d",&number[i]);
    }

    printf("Arrays element : ");
    for(int i = 0; i<size; i++){

         printf("%d",number[i]);
    }

    int i = 0, j = size-1;

    while (i<j)
    {
        int temp = number[i];
        number[i] = number[j];
        number[j] = temp;
        i++;
        j--;
    }

    printf("Reverse the print arrays  : ");
    for(int i = 0; i<size; i++){

         printf("%d ",number[i]);
    }


}
