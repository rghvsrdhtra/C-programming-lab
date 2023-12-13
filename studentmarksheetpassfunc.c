#include<stdio.h>

struct student {
    char name[50];
    int roll;
    int sub1;
    int sub2;
    int sub3;
};

int total_marks(struct student s) {
    return s.sub1 + s.sub2 + s.sub3;
}

void display(struct student s)
{ 
printf("\nEnter the details of student %d\n");
        printf("\nName: \n",s.name);
        printf("\nRoll: \n",s.roll);
        printf("\nMarks of subject 1: \n",s.sub1);
        printf("\nMarks of subject 2: \n",s.sub2);
        printf("\nMarks of subject 3: \n",s.sub3);
        printf("\nTotal Marks is: \n",total_marks(s));
}

int main() {
    struct student s[2];

    for (int i = 0; i < 2; i++) {
        printf("Enter the details of student %d\\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks of subject 1: ");
        scanf("%d", &s[i].sub1);
        printf("Marks of subject 2: ");
        scanf("%d", &s[i].sub2);
        printf("Marks of subject 3: ");
        scanf("%d", &s[i].sub3);
    }

    for (int i = 0; i < 2; i++) {
        printf("Total Marks of %s (Roll: %d) is: %d\\n", s[i].name, s[i].roll, total_marks(s[i]));
           }
{
void display();
}
    return 0;
}
