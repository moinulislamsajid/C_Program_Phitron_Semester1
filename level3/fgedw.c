#include <stdio.h>

int main() {
    int N, X, V;

    // Step 1: Read inputs
    scanf("%d", &N); // Size of array
    int A[N]; // Declare array of size N
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]); // Array elements
    }
    scanf("%d %d", &X, &V); // Index and value to update

    // Step 2: Update the array
    A[X] = V;

    // Step 3: Print the array in reverse order
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", A[i]);
    }

    return 0;
}

