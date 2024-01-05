#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)calloc(n, sizeof(int));

    if (arr1 == NULL || arr2 == NULL) {
        printf("Memory Error!\n");
    } else {
        for (int i = 0; i < n; i++) {
            *(arr1 + i) = i;
        }

        for (int i = 0; i < n; i++) {
            *(arr2 + i) = n - i;
        }
    }

    int *arr3 = (int *)malloc((n / 2) * sizeof(int));
    int *arr4 = (int *)malloc((2 * n) * sizeof(int));

    if (arr3 == NULL || arr4 == NULL) {
        printf("Reallocation Failed!\n");
    } else {
        for (int i = 0; i < n / 2; i++) {
            *(arr3 + i) = *(arr1 + i);
        }

        for (int i = 0; i < 2 * n; i++) {
            *(arr4 + i) = *(arr2 + i);
        }

        printf("\narr1:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", *(arr1 + i));
        }

        printf("\narr2:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", *(arr2 + i));
        }

        printf("\narr3:\n");
        for (int i = 0; i < n / 2; i++) {
            printf("%d ", *(arr3 + i));
        }

        printf("\narr4:\n");
        for (int i = 0; i < 2 * n; i++) {
            printf("%d ", *(arr4 + i));
        }

        free(arr1);
        free(arr2);
        free(arr3);
        free(arr4);
    }

    return 0;
}
