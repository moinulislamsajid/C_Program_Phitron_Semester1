#include<stdio.h>


int my_len(char arr[]){


    int count = 0;

    for(int i = 0; arr[i] != '\0'; i++){

        count++;

    }


    return count;



}

int main(){

    char s[20001];

    scanf("%s",s);

    int ans = my_len(s);


    printf("%d\n",ans);


}
