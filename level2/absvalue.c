#include<stdint.h>
#include<math.h>

int my_abs(int x){


    if(x>0){

        return x;

    }else if(x<0){

            int y = abs(x);

            return y;
    }else{


            return 0;
    }


}

int main(){

    int n;
    scanf("%d",&n);

    int ans = my_abs(n);

    printf("%d\n",ans);





}
