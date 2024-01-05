#include <stdio.h>

int main() {
    union student {
        int rollno;
        char name[50];
        float avg;
    };
    
    union student s;

    printf("Enter the student roll no: ");
    scanf("%d", &s.rollno);
    printf("Student roll no: %d\n", s.rollno);

    printf("Enter the student name: ");
    scanf("%s", s.name);
    printf("Student name: %s\n", s.name);
  
    printf("Enter the student average: ");
    scanf("%f", &s.avg);
    printf("Student average: %.2f\n", s.avg);

    return 0;
}
