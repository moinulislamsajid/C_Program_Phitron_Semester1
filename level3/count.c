#include<stdio.h>
#include<string.h>

int main() {
    char s[10001];
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int c = 0, s1 = 0, d = 0;
        scanf("%s", s);

        for(int j = 0; s[j] != '\0'; j++) {
            if(s[j] >= 'A' && s[j] <= 'Z') {
                c++;
            } else if(s[j] >= 'a' && s[j] <= 'z') {
                s1++;
            } else if(s[j] >= '0' && s[j] <= '9') {
                d++;
            }
        }

         printf("%d %d %d",c,s1,d);
    }



    return 0;
}






