#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,y;

    scanf("%d %d",&x,&y);

    int z = x - y;
    int rina = z /2;
    int mina = rina + y;

    printf("%d %d",mina,rina);


    return 0;
}

