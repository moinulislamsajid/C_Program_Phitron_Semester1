#include<stdio.h>

int main(){


    int number [] ={3,5,6,72};

    int len = sizeof(number) / 4;

    //printf("%d",len);
    int x = 119;


        for(int i =0 ; i<len; i++){

            for(int j = i+1; j<len; j++){

                if(number[i] + number[j] == x){

                    printf("Yes");
                }
            }
        }



}
