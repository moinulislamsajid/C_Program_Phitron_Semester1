#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        // Calculate the original number of days
        int original_days = D * M1;

        // If there are no additional farmers, output 0
        if (M2 == 0) {
            printf("0\n");
        } else {
            // Calculate the days with additional farmers
            int updated_days = original_days / (M1 + M2);

            // Output the difference in days
            printf("%d\n", original_days - updated_days);
        }
    }

    return 0;
}

