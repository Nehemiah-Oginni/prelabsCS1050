#include <stdio.h>
int main(void)
{
    int C;


    while(C<=49)// keeps counting until C reaches 50
    {
        C += 1;
    

    if(C % 5 == 0 && C % 3 == 0 )// if the number is divisible by 3 and 5 then fizz buzz with appear
    {
        printf("fizz buzz, ");
    }
    else if(C % 3 == 0)// if the number is divisible by 3 then fixx will print
    {
        if(!(C % 5 == 0 && C % 3 == 0))
        {
        printf("fizz, ");
        }
    }
    else if(C % 5 == 0)// if the number is divisible by 5 then buzz will print
    {
        if(!(C == 50))
        {
        if(!(C % 5 == 0 && C % 3 == 0))
        {
        printf("buzz, ");
        }
        }
        if(C == 50)
        {
            printf("buzz\n");
        }
    }
    else// if the numbers are not divisible by 5 or 3 they will be printed
    // (!(C % 5 == 0)) && (!(C % 3 == 0))
    {
        if(!(C == 50))
        {
            printf("%d, ",C);
        }
    }
   
    }
    return 0;
}
