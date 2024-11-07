#include <stdio.h>
#include <string.h>

enum StudentYearType
{
    freshman = 1,
    sophomore,
    junior,
    senior,
};
typedef struct
{
    char firstname[20];
    char lastname[20];
    enum StudentYearType year;
    float gpa;
} Student;

void printStudentInfo(Student student);
void addStudent(Student students[], int *count, Student newStudent);
void printStudentsGPAGreaterThan(Student *students, int count, float greaterGPA);
void findStudentWithMinGPA(Student students[], int count);
void findStudentWithMaxGPA(Student students[], int count);
void findStudentsByName(Student *students, int count, const char *name);

int main (void)
{
    int studentCount = 10;
    int* studentCountPtr = &studentCount;
    Student students[100] = 
    {
        {"Alice", "Smith", freshman, 3.50},
        {"Bob", "Johnson", sophomore, 3.70},
        {"Charlie", "Williams", junior, 3.80},
        {"Diana", "Jones", senior, 3.90},
        {"Eve", "Brown", freshman, 3.60},
        {"Frank", "Davis", sophomore, 3.40},
        {"Grace", "Miller", junior, 3.20},
        {"Hannah", "Wilson", senior, 3.30},
        {"Ivy", "Moore", freshman, 3.10},
        {"Jack", "Taylor", sophomore, 3.00}
    };
    Student newstudent = {"Vivian", "Nguyen", freshman, 4.00};
    
    addStudent(students, studentCountPtr, newstudent);
    for(int i=0; i<studentCount; i++)
    {
        printStudentInfo(students[i]);
    }
    printStudentsGPAGreaterThan(students, studentCount, 3.50);
    findStudentWithMinGPA(students, studentCount);
    findStudentWithMaxGPA(students, studentCount);
    findStudentsByName(students, studentCount, newstudent.firstname);
    
}
void printStudentInfo(Student student) //need this consistently
{
    printf("Student info:\n");
    printf("First Name: %s\n", student.firstname);
    printf("Last Name: %s\n", student.lastname);
    printf("Year: ");
        switch(student.year)
        {
            case freshman:
            printf("Freshman");
            break;
            case sophomore:
            printf("sophomore");
            break;
            case junior:
            printf("Junior");
            break;
            case senior:
            printf("Senior");
            break;
        }
    printf("\n");
    printf("GPA: %.2f\n\n", student.gpa);
}
void addStudent(Student students[], int *count, Student newStudent)// adds new student and places them into the index
{
    students[*count] = (newStudent);
    (*count)++;
}
void printStudentsGPAGreaterThan(Student *students, int count, float greaterGPA)
{
    printf("GPA'S greater than 3.5\n");
    for(int i=0; i<count; i++)
    {
        if(students[i].gpa >= greaterGPA)
        {
            printStudentInfo(students[i]);
        }
    }
}
void findStudentWithMinGPA(Student students[], int count)
{
    float holdmin = 10;
    int minIndex = 0;
    for(int i=0; i<count; i++)
    {
        if(holdmin >= students[i].gpa)
        {
            holdmin = students[i].gpa;
            minIndex = i;
        }
    }
    printf("Student with Min GPA:\n");
    printStudentInfo(students[minIndex]);
}
void findStudentWithMaxGPA(Student students[], int count)
{
    float holdmax = 0;
    int maxIndex = 0;
    for(int i=0; i<count; i++)
    {
        if(holdmax <= students[i].gpa)
        {
            holdmax = students[i].gpa;
            maxIndex = i;
        }
    }
    printf("Student with Max GPA:\n");
    printStudentInfo(students[maxIndex]);
}
void findStudentsByName(Student *students, int count, const char *name)
{
    printf("Find students with first name 'Vivian':\n");
    for(int i=0; i<count; i++)
    {
        if(!strcmp(students[i].firstname, "Vivian"))
        {
            printStudentInfo(students[i]);
        }
    }
}