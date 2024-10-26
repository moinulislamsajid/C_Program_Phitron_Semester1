#include<stdio.h>
#include<string.h>

int main(){

    char s[10001],d;

    scanf("%s",s);
    int count[26] = {0};


    for(int i = 0; s[i] != '\0'; i++){

        int value = s[i] - 97;

        count[value]++;
    }

    for(d = 'a'; d<='z'; d++){


        if(count[d - 97]>0){

            printf("%c - %d\n",d,count[d-97]);
        }
    }


}
