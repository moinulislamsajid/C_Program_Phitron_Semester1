#include<stdio.h>
#include<string.h>


int main(){


    char s[100001];

    scanf("%s",s);

    int count = 0;

    int len = strlen(s);

    for(int i = 0; i<len; i++){

        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] !=  'o' && s[i] != 'u'){

            count++;
        }

    }


    printf("%d\n",count);





}









