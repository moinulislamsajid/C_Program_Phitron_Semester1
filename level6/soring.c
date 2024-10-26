#include<stdio.h>

int main() {
    int array[3];

    // Input the array elements
    for(int i = 0; i < 3; i++) {
        scanf("%d", &array[i]);
    }

    // Sort the array in ascending order
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2 - i; j++) { // Adjusted the loop boundary
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Print the sorted array elements
    for(int i = 0; i < 3; i++) {
        printf("%d\n", array[i]);
    }

    // Print the original array elements on new lines
    for(int i = 0; i < 3; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

