#include<stdio.h>

int main()
{
    long long int a,b,c;

    scanf("%lli %lli %lli",&a,&b,&c);

    if(a == 1 && b == 1 && c == 1){

        printf("1");

    }else{

            if(a%c == 0 && b %c == 0){


                printf("Both\n");

            }else if(a%c == 0 && b%c!=0){

                printf("Memo\n");

            }else if(b%c == 0 && a%c!=0){

                printf("Momo\n");

            }else {

                    printf("No One");

            }


    }



}
