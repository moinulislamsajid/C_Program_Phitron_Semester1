#include<stdio.h>
#include<string.h>

int is_palindrome(char s[]){

        char p[1001];

        int i = 0,len = 0,j;

        while(s[i] != '\0'){


            i++;
            len++;
        }

        for(j = 0, i = len - 1; i>=0; i--,j++){

            p[j] = s[i];
        }

        p[j] = '\0';

        int d = strcmp(s,p);

        if(d == 0){

            return 1;

        }else{

            return 0;
        }




}


int main(){

    char str[1001];

    scanf("%s",str);

    int ans = is_palindrome(str);

    if(ans == 1){

        printf("Palindrome");

    }else{

        printf("Not Palindrome");

    }





}
