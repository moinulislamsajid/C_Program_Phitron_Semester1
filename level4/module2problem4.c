#include<stdio.h>

int main(){

    int num;

    scanf("%d",&num);

    int first = num / 1000;

    if(first % 2==0){


        printf("EVEN");

    }else{

        printf("ODD");

    }



}
