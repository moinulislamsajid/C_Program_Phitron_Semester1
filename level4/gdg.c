#include <stdio.h>

int main() {
    int n, index, value;

    // Step 1: Read the size of the array from the user
    scanf("%d", &n);

    // Step 2: Declare an array of size n+1
    int arr[n];

    // Step 3: Read n elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 4: Read the index where the new element will be inserted
    scanf("%d", &index);

    // Step 5: Read the value of the new element
    scanf("%d", &value);

    // Step 6: Shift elements to the right to create space for the new element
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Step 7: Insert the new element at the specified index
    arr[index] = value;

    // Increase the size of the array


    // Step 8: Print the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

