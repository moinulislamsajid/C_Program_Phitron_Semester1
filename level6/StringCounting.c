#include<stdio.h>


int main(){

    char s[] = "sajaaaaid";


    int len = strlen(s);

    int count[100] = {0};


    for(int i = 1; i<=len; i++){

        int value = s[i] - 'a';

        count[value]++;

    }

    printf("%d ",count[0]);

    for(int i = 0; i<len; i++){

        printf("\nTotal number of %c ---- %d",i+'a',count[i]);

    }





}

