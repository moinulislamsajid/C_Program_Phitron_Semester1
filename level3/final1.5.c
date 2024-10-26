#include<stdio.h>

int main(){


    int n;

    scanf("%d",&n);
    int count =0,bcount = 0;
    for(int i = 0; i<n; i++){

        char s;

        scanf("%ch",&s);

        if(s=='a' || s == 'A'){

              count++;

        }else if(s == 'b' || s == 'B'){


                bcount++;
        }



    }


    if(count > bcount){

        printf("A");
    }

}
