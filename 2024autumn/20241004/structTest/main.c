#include <stdio.h>

typedef struct Student
{
    int studentNumber;
} student;

void printStudentNumber(student student1);
void printAllStudents(student students[]);

int main()
{
    student student1;
    student1.studentNumber = 1;
    student students[3];
    students[0] = student1;
    students[1] = student1;
    students[2] = student1;
    printStudentNumber(students[0]);
    printAllStudents(students);
    return 0;
}

void printStudentNumber(student student1)
{
    printf("%d", student1.studentNumber);
}
void printAllStudents(student students[]){
    printf("\n******* All students*********\n");
    for (int i = 0; i < 3; ++i) {
        printf("\n%d", students[i].studentNumber);
    }
}
