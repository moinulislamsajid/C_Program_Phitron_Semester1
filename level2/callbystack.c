#include<stdio.h>

void first(){

    printf("First Hello\n");

}

void second(){


    printf("Second Hello\n");
    first(); // waiting

}



int main(){

    second();// waiting
    printf("End\n");


}



