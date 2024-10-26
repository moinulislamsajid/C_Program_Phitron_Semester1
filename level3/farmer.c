#include<stdio.h>

 int main(){


    int t;

    scanf("%d",&t);

    for(int i = 0; i<t; i++){

        int m1,m2,d;

        scanf("%d %d %d",&m1,&m2,&d);


        int  dO = m1*d;

        if(m2 == 0){

            printf("0\n");

        }else{

            int td = dO /(m1+m2);

            int ansday = d - td;

            printf("%d\n",ansday);

        }


    }




 }
