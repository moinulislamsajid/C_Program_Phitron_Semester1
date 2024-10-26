#include<stdio.h>
#include<string.h>

int main(){

    char a[1001],b[1001];

    scanf("%s",a);

    int i =0,len = 0,j;

    while(a[i] != '\0'){

        i++;
        len++;

    }

    for(j = 0, i = len - 1; i>=0; i--,j++){

        b[j] = a[i];
    }
    b[j] = '\0';

    int d = strcmp(a,b);

    if(d==0){

        printf("YES\n");
    }else{

        printf("NO\n");
    }




}
