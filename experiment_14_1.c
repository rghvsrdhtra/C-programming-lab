#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter data to write to the file: ");
    fgets(data, sizeof(data), stdin);
    fprintf(file, "%s", data);

    fclose(file);

    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Data read from the file: ");
    fgets(data, sizeof(data), file);
    printf("%s", data);

    fclose(file);

    return 0;
}
