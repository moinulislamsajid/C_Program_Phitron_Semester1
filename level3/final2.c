#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i<t; i++){

        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int abc = a * b * c;

        if(m % abc == 0) {
            printf("%lld\n", m / abc);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
