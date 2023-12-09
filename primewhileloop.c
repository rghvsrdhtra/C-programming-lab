#include <stdio.h>

int main() {
    int a, i = 2;
    scanf("%d", &a);

    while (i <= a / 2) {
        if (a % i == 0) {
            printf("It is not a prime number");
            break;
        }
        i++;
    }

    if (i > a / 2) {
        printf("It is a prime number");
    }

    return 0;
}
