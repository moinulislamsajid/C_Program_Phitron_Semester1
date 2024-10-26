#include<stdio.h>


int main(){

    int n;

    scanf("%d",&n);

    int number[n];

    for(int i = 0; i<n; i++){

        scanf("%d",&number[i]);
    }

    int pos,value;

    scanf("%d %d",&pos,&value);




        number[pos] = value;






    for(int i = n - 1; i>=0; i--){

        printf("%d ",number[i]);
    }




}
