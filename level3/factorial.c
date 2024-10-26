#include<stdio.h>


    long long int fun(long long int x){



        if(x==0){

            return 1;
        }



         long long int res = fun(x-1);

         return res * x;







    }

int main(){

    long long int n;

    scanf("%lli",&n);



    long long int ans = fun(n);
    printf("%lli\n",ans);





}
