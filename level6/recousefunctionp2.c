#include<stdio.h>

void fun(int x){

    if(x==1) {

        printf("%d ",x);
        return;
    }



     printf("%d ",x);

     fun(x-1);
}

int main(){

    int n;

    scanf("%d",&n);

    fun(n);

    printf("\n");

}

