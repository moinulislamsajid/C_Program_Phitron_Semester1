#include<stdio.h>

int main(){

    int a[5];

    int size = sizeof(a)/4;

    printf("%d ",size);

    // initial

    char a1[6]="Sajid\0";

    for(int i = 0; i<5; i++){

        printf("%c ",a1[i]);
    }

    printf("%s ",a1);


    char w[10];
    scanf("%s",w);
    printf("%s ",w);

    char p[20];
    gets(p);
    printf("%s ",p);

    char r[30];
    fgets(p,15,stdin);
    printf("%s ",r);

}
