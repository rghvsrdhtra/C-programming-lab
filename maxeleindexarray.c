#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], index = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Index of maximum element: %d\n", index);

    return 0;
}
