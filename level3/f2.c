#include<stdio.h>


  int hello(){

    int x,y,z;

        scanf("%d %d",&x,&y);

        z = x - y;

    return z;


  }


  int  main(){


    int ans = hello();
    printf("%d",ans);


  }
