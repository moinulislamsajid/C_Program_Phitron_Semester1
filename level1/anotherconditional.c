#include<stdio.h>

int main(){

    int price;

    printf("Enter your money : ");
    scanf("%d",&price);

    if(price >= 100){

        printf("Burger Khabo");
    }else if(price >= 50){

            printf("Fuska Khabo");

    }else{

        printf("Kicu ei khabo nah");
    }


    return 0;
}