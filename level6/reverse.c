#include<stdio.h>

int main(){

 int  num,rem,sum;

 scanf("%d",&num);

 int temp = num;

 while(temp>0){

    rem = temp%10;
    sum = sum * 10 +rem;
    temp = temp / 10;

 }



 printf("%d\n",sum);



}
