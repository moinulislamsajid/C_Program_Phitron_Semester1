#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    for (int t = 0; t < T; t++) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D); // Input M1, M2, and D for each test case

        // Calculate the efficiency of the original group of farmers
        double efficiency_original = (double) M1 / D;
        // Calculate the efficiency of the combined group of farmers
        double efficiency_combined = (double) (M1 + M2) / D;
        // Calculate the number of days it will take for the combined group of farmers to complete the work
        int days_combined = (int) (D * (M1 / (double) (M1 + M2)));
        // Calculate how many fewer days it will take for the combined group of farmers to complete the work
        int days_saved = D - days_combined;

        printf("%d\n", days_saved); // Output the result for the current test case
    }

    return 0;
}
