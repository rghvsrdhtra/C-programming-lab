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

void writeToFile(struct Student *student, FILE *file) {
    fprintf(file, "%s %d %.2f %.2f %.2f %.2f %.2f %.2f %.2f\n",
            student->name, student->rollNumber,
            student->marks[0], student->marks[1], student->marks[2],
            student->marks[3], student->marks[4], student->totalMarks);
}

void readFromFile(struct Student *student, FILE *file) {
    fscanf(file, "%s %d %f %f %f %f %f %f %f",
           student->name, &student->rollNumber,
           &student->marks[0], &student->marks[1], &student->marks[2],
           &student->marks[3], &student->marks[4], &student->totalMarks);
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    FILE *file = fopen("student_data.txt", "w+");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        inputStudent(&students[i]);
        calculateTotalMarks(&students[i]);
        writeToFile(&students[i], file);
    }

    fseek(file, 0, SEEK_SET);

    printf("\nDetails for Each Student (Read from File):\n");
    for (int i = 0; i < n; i++) {
        readFromFile(&students[i], file);
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Total Marks: %.2f\n", students[i].totalMarks);
    }

    fclose(file);

    return 0;
}
