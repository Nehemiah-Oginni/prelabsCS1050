#include <stdio.h>
int main(void)
{
    int A; /* the first number put in by the user*/
    int B; /* the second number put in by the user*/
    int C; /* the third number put by the user*/
    int D; /* the fourth number put by the user*/
    int sum;//where the sum will be stored//
    int product;// where the product will be stored//
    int quotient;// where the quotient will be stored//
    int remainder;// where the remainder will be stored//
    int alltogether;// where the product of A and C divided by the quantity sum of B and D :) //
    
    printf("enter A here\n");//prompt to tell user to enter number for A//
    scanf("%d", &A);// makes it scan A in base 10//

    printf("enter B here\n"); //prompt to tell user to enter number for B//
    scanf("%d", &B);//makes it scan B in base 10//

    printf("enter C here\n");//prompt to tell user to enter number for C//
    scanf("%d", &C); //makes it scan C in base 10//

    printf("enter D here\n"); //prompts user to enter number for D//
    scanf("%d", &D); // reads D in base 10//
    
    sum = B + C; //tells sum of inputs of B and C//
    product = A * D; //tells product of inputs of A and D//
    quotient = A / C; //tells the quotient of A divided by C//
    remainder = C % D;//tells the remainder of C divided by D//
    alltogether = (A * C) / (B + D);// tells the answer to A times C devided by the summ of B + D//

    printf("the sum of B and C is %d\n",sum); //tells the sum of B and C//
    printf("the product of A and D is %d\n", product); //tells the product of A and D in base 10//
    printf("the integer quotient of A divided by C is %d\n", quotient); //tells the quotient of A divided by C in base 10//
    printf("the integer remainder of C divided by D is %d\n", remainder); //tells the remainder of C divided by D in base 10//
    printf("the product of A and C divided by the quantity sum of B and D is %d\n", alltogether);/* gives the product of A and C devided by the sum of B and D in base 10*/

    return 0;// code is finished hahahaha >:D
}
