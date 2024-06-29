#include <stdio.h>

int main() {
    int t, a, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);
        int c = 0;
        int rem = a % b;
        if (rem != 0) {
            c = b - rem;
        }
        printf("%d\n", c); 
    }
    return 0;
}
 