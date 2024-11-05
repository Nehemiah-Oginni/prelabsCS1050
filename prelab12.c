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
    
}
