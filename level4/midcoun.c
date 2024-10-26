#include<stdio.h>
#include<string.h>

int main(){

    char s[10001];
    int t,c=0,s1=0,d=0;
    scanf("%d",&t);

    for(int i = 0; i<t; i++){

        scanf("%s",s);
    }

    for(int i=0; i<t; i++){

        for(int i = 0; s[i] != '\0'; i++){

            if(s[i] >= 65 && s[i] <=90){

                c++;
            }else if(s[i] >= 97 && s[i] <=122){

                s1++;

            }else if(s[i] >= 48 && s[i] <=57){

                d++;
            }



        }

        printf("%d %d %d",c,s1,d);



    }














}






