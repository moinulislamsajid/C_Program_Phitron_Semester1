#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int year;

    scanf("%d",&year);

    int sons = (80/5);
    int baba = year - sons;

    printf("%d %d",baba,sons);

    return 0;
}

