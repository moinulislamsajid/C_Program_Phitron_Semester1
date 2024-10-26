#include<stdio.h>

int main(){

    int a,b;
    scanf("%d %d",&a,&b);
    int res = a+b;
    int res1 = a-b;
    int res2 = a*b;
    float res4 = (float) a/b;
    printf("%d + %d = %d\n",a,b,res);
    printf("%d + %d = %d\n",a,b,res1);
    printf("%d + %d = %d\n",a,b,res2);
    printf("%d + %d = %.2f",a,b,res4);






}
