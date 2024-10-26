#include<stdio.h>
#include<string.h>

int main(){

    char a[20] ="Ayman Sajid";

    int count = 0;
    /*for(int i = 0; i<a[i] != '\0'; i++){

       count++;

    }

    printf("%d ",count);*/


    int j = 0;

    while(j < a[j] != '\0'){

        count++;
        j++;
    }

    printf("%d ",count);

    int len = strlen(a);

    printf("%d ",len);


}
