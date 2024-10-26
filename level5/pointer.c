#include<stdio.h>

int main(){


        int x = 100;

        // create a pointer

        int* ptr = &x;

        // now print the address of x

        printf("%p\n",ptr);

        printf("The address of x : %p\n",&x);

        printf("The address of ptr : %p\n",&ptr);

        // now print the value of x

        printf("%d",*ptr); //  this is called dereference




}
