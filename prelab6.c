#include <stdio.h>
#define SIZE 20
int main (void)
{
    int sum = 0;
    double array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    
    for(int i=0;i<SIZE;i++)
    {
    printf(" array [%d] = %1.0f\n", i, array[i]);
    sum = sum + array[i];
    if(i == 19)
    {
         double average = sum / array[i];
         printf(" Total of all elements = %d\n Average = %.1f \n", sum, average);
    }
    }
}
