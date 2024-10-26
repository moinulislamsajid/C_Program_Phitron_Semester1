#include<stdio.h>

    int fun(int x){

        if(x==0) return 0;
        fun(x-1);
        printf("I love Recursion\n");



    }



int main(){

    int n;

    scanf("%d",&n);

    fun(n);


}
