#include <stdio.h>

int main() {
    int n;
    
    // Input number of events
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("0\n");
        return 0;
    }

    int e[n];
    
    // Input events
    for (int i = 0; i < n; i++) {
        scanf("%d", &e[i]);
    }

    int uc = 0;  // Uncovered crimes
    int ao = 0;  // Available officers

    // Process events
    for (int i = 0; i < n; i++) {
        if (e[i] == -1) {
            if (ao > 0) {
                ao--;
            } else {
                uc++;
            }
        } else {
            ao += e[i];
        }
    }

    // Output result
    printf("%d\n", uc);
    
    return 1;
}
