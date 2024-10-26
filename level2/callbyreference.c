#include<stdio.h>

void fun(int *p){


    *p = 100;

}

int main(){


    int x = 20;

   fun(&x);


    printf("%d",x);



}





