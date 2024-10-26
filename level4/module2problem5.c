#include<stdio.h>

int main(){

    char a;

    scanf("%c",&a);


    if(a>=48 && a<=57){

        printf("IS DIGIT\n");

    }else if(a>='a' && a<='z'){

        printf("ALPHA\n");
        printf("IS SMALL\n");

    }else{

        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }





}
