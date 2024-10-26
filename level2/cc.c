#include<stdio.h>
#include<string.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        char S[10001];
        scanf("%s", S);

        int c = 0, s = 0, d = 0;


        for(int j = 0; S[j] != '\0'; j++) {

            if(S[j] >= 'A' && S[j] <= 'Z') {

                c++;

            } else if(S[j] >= 'a' && S[j] <= 'z') {

                s++;

            } else if(S[j] >= '0' && S[j] <= '9') {

                d++;
            }
        }


        printf("%d %d %d\n", c, s, d);
    }

    return 0;
}

