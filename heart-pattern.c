#include <stdio.h>

int main() {
    int n = 0;
    char isBroke;
    printf("Enter size of heart: ");
    scanf("%d", &n);
    printf("Are you broken? (y/n) : ");
    scanf(" %c", &isBroke);
    int row = 2 + (n / 10);
    printf("\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < (row - 1) - i; j++) {
            printf(" ");
        }
        for (int j = 0, k = 0; j < n - (2 * (row - 1)) + (i * 2); j++, k++) {
            printf("*");
        }
        for (int j = 0; j < ((row * 2) - 1) - (2 * i); j++) {
            printf(" ");
        }
        for (int j = 0; j < n - (2 * (row - 1)) + (i * 2); j++) {
            printf("*");
        }
        printf("\n");
    }

    int broken = n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < (n * 2 + 1) - (2 * i); j++) {
            if(isBroke == 'y') {
                if(i < n) {
                    if(j == broken - 1 || j == broken) {
                        printf(" ");
                    } else {
                        printf("*");
                    }
                } else {
                    printf("*");
                }
            } else {
                printf("*");
            }
        }
        broken = i % 2 == 1 ? broken - 2 : broken;
        printf("\n");
    }

    return 0;
}