#include<stdio.h>

void swap_it(int*t,int*m){

        int temp = *t;
        *t = *m;
        *m = temp;




}



int main(){


        int x,y;

        scanf("%d %d",&x,&y);

        swap_it(&x,&y);
        printf("%d %d",x,y);



}




