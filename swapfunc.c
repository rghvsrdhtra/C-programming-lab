#include<stdio.h>

void swap(int *, int *);

int main() {
    int a = 10, b = 20;
    printf("Before Swapping: a=%d b=%d", a, b);
    swap(&a, &b);
    printf("\nAfter Swapping: a=%d b=%d\n", a, b);
    return 0;
}

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
    printf("\nAfter Swapping: ");
    printf("\nx=%d y=%d", *x, *y);
}
