
#include<stdio.h>
#include<string.h>

int main()
{

    char a[100],b[100];
    scanf("%s %s",a,b);

    int c = strlen(a);

    for(int i = 0; i<strlen(b); i++){

        a[c] = b[i];
        c++;

    }

    printf("%s ",a);

    // using the function

    strcat(a,b);

    printf("\n%s ",a);

}
