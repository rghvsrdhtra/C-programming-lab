#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    int a = x + y;
    int b = y + z;
    int c = x + z;
    (a == b && b == c) ? printf("The sums are equal.\\n") : printf("The sums are not equal.\\n");
    return 0;
}