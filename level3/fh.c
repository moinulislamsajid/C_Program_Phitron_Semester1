#include<stdio.h>
#include<string.h>

// Function to count capital letters, small letters, and digits
void count_characters(char *s, int *capital_count, int *small_count, int *digit_count) {
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            (*capital_count)++;
        } else if(s[i] >= 'a' && s[i] <= 'z') {
            (*small_count)++;
        } else if(s[i] >= '0' && s[i] <= '9') {
            (*digit_count)++;
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        char S[10001];
        scanf("%s", S);

        int capital_count = 0, small_count = 0, digit_count = 0;

        // Count capital letters, small letters, and digits
        count_characters(S, &capital_count, &small_count, &digit_count);

        // Output the counts
        printf("%d %d %d\n", capital_count, small_count, digit_count);
    }

    return 0;
}

