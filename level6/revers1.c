#include <stdio.h>
int main()
{

    int size;

    printf("Enter the size of arrays : ");
    scanf("%d", &size);

    int number[size + 1];

    printf("Enter arrays element : ");
    for (int i = 0; i < size; i++)
    {

        scanf("%d", &number[i]);
    }

    printf("Print the arrays : ");
    for(int i = 0; i<size; i++){

        printf("%d ",number[i]);
    }

    // now print the arrays

    printf("\nReverse the arrays : ");
    for(int i = size-1; i>=0; i--){

        printf("%d ",number[i]);
    }

}
