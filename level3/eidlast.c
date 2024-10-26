#include <stdio.h>

int minSteps(int x) {
    if (x <= 3)
        return 1; // If x is within the first 3 positions, Asif can reach in 1 step

    // If x > 3, Asif can reach x by moving 3 steps at a time and then possibly one more step
    // We divide x by 3 and add 1 if there's a remainder to handle the last few steps
    return x / 3 + (x % 3 != 0);
}

int main() {
    int x;
    scanf("%d", &x); // Input the coordinate of the friend's house

    // Calculate and print the minimum number of steps
    printf("%d\n", minSteps(x));

    return 0;
}
