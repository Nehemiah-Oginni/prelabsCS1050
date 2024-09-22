#include <stdio.h>
#include <math.h>
/*this is an extra prelab for practice and to help
with studying before the test. ps: we almost did it 
all by ourselves >:D*/
int myint2 (int n) //function for second number "^n"
{
    for(int i=0;i<=5;i++)
    {
        n+= 1;
        return n;
    }
    return n;
}
int myint1 (int a)// function for base number
{
    for(int i=0;i<=5;i++)
    {
        a += 1;
        return a;
    }
   
    return a;
}

int main (void)
{
    for(int b=0;b<=4;b++)// keeps first(base) number the same through all 5 loops then changes after the first 5 loop is over
    {
    for(int i=-1;i<=4;i++)// loops second number through 0 to 5
    {
        int result = pow(myint1(b),myint2(i));// result is the return of first function to the power of the second function
        printf("myPow(%d,%d)=%d\n", myint1(b), myint2(i), result);// print the output of first and second function with the result
    }
    }
    
}
