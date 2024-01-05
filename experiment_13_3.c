#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks[5];
    float totalMarks;
};

void inputStudent(struct Student *student) {
    printf("Enter Name: ");
    scanf("%s", student->name);

    printf("Enter Roll Number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student->marks[i]);
    }
}

void calculateTotalMarks(struct Student *student) {
    student->totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        student->totalMarks += student->marks[i];
    }
}

void displayStudent(struct Student *student) {
    printf("Name: %s\n", student->name);
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Total Marks: %.2f\n", student->totalMarks);
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        inputStudent(&students[i]);
        calculateTotalMarks(&students[i]);
    }

    printf("\nDetails for Each Student:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        displayStudent(&students[i]);
    }

    return 0;
}
