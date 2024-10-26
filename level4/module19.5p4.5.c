#include<stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    int array[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    long long int sum = 0;
    for(int i = 0; i < n; i++){
        if(array[i] < k){
            sum += array[i];
        }
    }

    printf("%lli\n", sum);
    return 0;
}

