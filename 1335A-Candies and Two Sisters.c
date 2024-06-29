#include <stdio.h>

int calculate_ways(int n) {
    if (n < 3) {
        return 0;
    }
    return (n - 1) / 2;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", calculate_ways(n));
    }

    return 0;
}