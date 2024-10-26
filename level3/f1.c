#include<stdio.h>


    int sum (int x , int y){

        int z = x+y;

        return z;
    }


    int main(){

        int t,c;
        scanf("%d %d",&t,&c);
        int ans = sum(t,c);
        printf("%d\n",ans);
    }



