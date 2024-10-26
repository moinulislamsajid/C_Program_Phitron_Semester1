#include <stdio.h>

void print_even_indices_reversed(int arr[], int n, int index) {
    if (index >= 0) {
        if (index % 2 == 0) {
            printf("%d ", arr[index]);
        }
        print_even_indices_reversed(arr, n, index - 2);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    print_even_indices_reversed(arr, n, n - 1);

    return 0;
}

