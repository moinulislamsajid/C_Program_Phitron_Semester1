#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Print upper half of the pattern
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++)
            printf(" ");

        // Print leading '#'
      //  printf("#");

        // Print '-' characters
        for (int j = 1; j <= 2 * i - 3; j++)
            printf("#");

        // Print ending '#'
        if (i != 1)
            printf("-");

        printf("\n");
    }

    // Print lower half of the pattern
    for (int i = N - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++)
            printf(" ");

        // Print leading '#'
       printf("#");

        // Print '-' characters
        for (int j = 1; j <= 2 * i - 3; j++)
            printf("-");

        // Print ending '#'
        if (i != 1)
            printf("#");

        printf("\n");
    }

    return 0;
}
