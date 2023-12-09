#include <stdio.h>
#include <string.h>

int main() {
    // String input
    char str1[50], str2[50];
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // String length
    printf("Length of the first string: %lu\n", strlen(str1));
    printf("Length of the second string: %lu\n", strlen(str2));

    // String concatenation
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // String comparison
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
