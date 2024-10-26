#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    for (int t = 0; t < T; t++) {
        int N, X;
        scanf("%d", &N); // Size of the array
        int A[N]; // Array of size N

        // Input array elements
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        scanf("%d", &X); // Value of X

        int found = 0; // Flag to indicate if X is found in the array

        // Iterate through the array to check if X is present
        for (int i = 0; i < N; i++) {
            if (A[i] == X) {
                found = 1;
                break;
            }
        }

        // Output "YES" or "NO" based on whether X is found
        if (found) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
