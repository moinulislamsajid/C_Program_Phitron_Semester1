#include<stdio.h>

int main(){



        int m,n;

        scanf("%d %d",&m,&n);

        int array[m][n];


        for(int i = 0; i<m; i++){

            for(int j = 0; j<n; j++){

                scanf("%d",&array[i][j]);
            }
        }

        int flag = 1;

        if(m!=n){

            flag = 0;
        }else{for(int i = 0; i<m; i++){

            for(int j = 0; j<n; j++){

                    if(i == j && array[i][j] != 1){

                            flag = 0;


                    }

                    if(i+j == m - 1 && array[i][j] != 1){

                            flag = 0;


                    }

                    if(i!=j && i+j != m - 1 && array[i][j] != 0){

                        flag = 0;

                    }


                    }


            }


        if(flag == 1){

            printf("YES\n");

        }else{

            printf("NO\n");

        }
}





}
