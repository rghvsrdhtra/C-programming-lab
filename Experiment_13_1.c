#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks[5];
    float totalMarks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    for (int i = 0; i < n; i++) {
        students[i].totalMarks = 0;

        for (int j = 0; j < 5; j++) {
            students[i].totalMarks += students[i].marks[j];
        }
    }

    printf("\nTotal Marks for Each Student:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d (%s, Roll Number: %d): %.2f\n", i + 1, students[i].name, students[i].rollNumber, students[i].totalMarks);
    }

    return 0;
}
