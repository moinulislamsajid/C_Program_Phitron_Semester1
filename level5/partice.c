#include<stdio.h>

int main(){


    char s [200];

    scanf("%s",s);

    if(s>='a' && s<='z'){

        printf("%d",s+64);
    }
}
