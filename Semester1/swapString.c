#include<stdio.h>
#include<string.h>

int main(){


    char a[100],b[100];

    scanf("%s %s",a,b);

    for(int i = 0; i<=strlen(b); i++){

        a[i] = b[i];
    }

    printf("%s %s",a,b);

    // to print the strcpy();

    strcpy(a,b); // ai khana b ar string a ar modda coila asba



}
