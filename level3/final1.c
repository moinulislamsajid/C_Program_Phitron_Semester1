#include<stdio.h>
#include<string.h>

int main(){


    int t;

    scanf("%d",&t);

    for(int i = 0; i<t; i++){

        int n;

        scanf("%d",&n);

        char s;

        int pc = 0, tc = 0;

        for(int j = 0; j<n; j++){

            scanf(" %c",&s);

            if(s ==  'T'){

                tc++;

            }else if(s == 'P'){

                pc++;
            }
        }


       // printf("%d %d",tc,pc);

        if(tc>pc){

            printf("Tiger\n");

        }else if(pc>tc){

            printf("Pathaan\n");

        }else{

            printf("Draw\n");

            }






    }

}
