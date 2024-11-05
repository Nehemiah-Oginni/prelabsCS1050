#include <stdio.h>
#include <string.h>

enum StudentYearType
{
    freshman = 1,
    sophmore = 2,
    junior = 3,
    senior = 4,
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
    
}
void printStudentInfo(Student student)
{
    printf("Student info:\n
            First Name: %s\n
            Last Name: %s\n
            Year: ", Student.firstname[i], Student.lastname[i]);
            switch(Student.year[i])
            {
                case freshman:
                printf("Freshman");
                case sophmore:
                printf("Sophmore");
                case junior:
                printf("Junior");
                case senior:
                printf("Senior");
            }
    printf("\n");
    printf("GPA: %.2f", Student.gpa[i])
    
}