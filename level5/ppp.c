#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int n,sum= 0;

    scanf("%d",&n);

    for(int i = 1; i<=n; i++){

        sum = sum + i;
    }

    printf("%d\n",sum);

    return 0;
}
