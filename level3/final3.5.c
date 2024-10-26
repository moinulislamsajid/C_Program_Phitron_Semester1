#include<stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int array[m][n];

    // Input matrix
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Flag to track whether it's a Jadu Matrix or not
    int jaduFlag = 1;

    // Check primary diagonal and secondary diagonal
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            // Check primary diagonal
            if(i == j && array[i][j] != 1) {
                jaduFlag = 0;
                break;
            }
            // Check secondary diagonal
            if(i + j == m - 1 && array[i][j] != 1) {
                jaduFlag = 0;
                break;
            }
            // Check non-diagonal elements
            if(i != j && i + j != m - 1 && array[i][j] != 0) {
                jaduFlag = 0;
                break;
            }
        }
        if(jaduFlag == 0) {
            break;
        }
    }

    // Output the result
    if(jaduFlag == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
