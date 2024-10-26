#include <stdio.h>
#include <string.h>

int main() {
    char s[10001], d;
    int count[26] = {0}; // Array to store count of each character
    scanf("%s", s);

    // Count occurrences of each character in the string
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    // Print the count of each character
    for (d = 'a'; d <= 'z'; d++) {
        if (count[d - 'a'] > 0) {
            printf("%c - %d\n", d, count[d - 'a']);
        }
    }

    return 0;
}

