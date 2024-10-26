#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,y;

    scanf("%d %d",&x,&y);


    int gift = (x/y);
    int rem = (x%y);

    printf("%d %d\n",gift,rem);



    return 0;
}

