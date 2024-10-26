#include<stdio.h>

int main()
{

    int n;

    scanf("%d",&n);

    for(int i =1; i<=n; i++){ // i = raw

        for(int j = 1; j<=i; j++){ // j = col

            printf("%c ",j+96);
        }

        printf("\n");
    }


}
