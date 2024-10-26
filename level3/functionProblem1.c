#include<stdio.h>

int sum(int x , int t){

    int ans = x + t;

    return ans;

}

int main()

{

        int x,y;

        scanf("%d %d",&x,&y);

        int ans = sum(x,y);

        printf("%d\n",ans);



 }
