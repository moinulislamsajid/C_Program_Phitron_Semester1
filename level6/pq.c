#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        // Calculate the original number of days
        int original_days = D * M1;

        // Calculate the days with additional farmers
        int updated_days = original_days / (M1 + M2);

        // Output the difference in days
        printf("%d\n", original_days - updated_days);
    }

    return 0;
}

