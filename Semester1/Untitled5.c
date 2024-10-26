#include<stdio.h>
#include<string.h>

int main(){


    char s[10001];

    scanf("%s",s);

    int count[26]={0};

    int len = strlen(s);
    for(int i = 0; i<len; i++){

        int val = s[i] -  'a';

        count[val]++;

    }

    for(int i = 0; i<len; i++){



        if(s[i] != 0){

            printf("%c - %d\n",i + 'a',count[i]);

        }


    }

}
