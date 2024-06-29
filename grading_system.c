#include <stdio.h>

int main()
{
    int g;
    scanf("%d", &g);

    switch (g / 10) {
        case 10: 
        case 9:
            printf("Grade A");
            break;
        case 8:
            printf("Grade B");
            break;
        case 7:
            printf("Grade C");
            break;
        case 6:
            printf("Grade D");
            break;
        default:
            if (g >= 0 && g < 60) {
                printf("Grade F");
            } else {
                printf("Invalid grade");
            }
            break;
    }

    return 0;
}
