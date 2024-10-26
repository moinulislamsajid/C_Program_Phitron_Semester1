#include<stdio.h>

    int fun(char ar[],int n){


        if(ar[n]=='\0') {

            return 0;
        }

        int ans = fun(ar,n+1);

        if(ar[n] >= 'A' && ar[n] <= 'Z'){

            ar[n] = ar[n] + 32;
        }

        if(ar[n] == 'a' || ar[n] == 'e' || ar[n] == 'i' || ar[n] == 'o' || ar[n] == 'u'){


            return ans+1;

        }else{


            return ans;

        }








 }


    int main(){

    char s[205];

    fgets(s,205,stdin);

    int ans = fun(s,0);

    printf("%d\n",ans);



}
