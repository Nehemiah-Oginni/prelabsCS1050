#include <stdio.h>
#include <math.h>

/* function: factoral
description: this function calculated the factoral (n!) of a given number */
double factoral(int n)
{
    double result = 1;
    for(int i=n; i>1; i--)
    {
        result*=i;
    }
    return result;
}
double myexp(int x)
{
    double result = 1;
    for(int i = 1; i<20; i++)
    {
        result += pow(x,i)/factoral(i);
    }
    return result;
}
int main(void)
{
    for(int i=1; i<=5;i++)
    {
        printf("e to the %d power = %.10lf\n", i, myexp(i));
    }

}
