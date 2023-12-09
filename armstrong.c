#include<stdio.h>
#include<math.h>

int main() {
    int num, digit, sum = 0, count = 0, duplicate;

    scanf("%d", &num);
    duplicate = num;

    while (duplicate != 0) {
        duplicate /= 10;
        count++;
    }

    duplicate = num;

    while (duplicate != 0) {
        digit = duplicate % 10;
        sum += pow(digit, count);
        duplicate /= 10;
    }

    if (sum == num) {
        printf("Given number is an Armstrong number\n");
    } else {
        printf("Given number is not an Armstrong number\n");
    }

    return 0;
}
