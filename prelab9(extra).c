#include <stdio.h>

//prototypes start
int getInt(int *given);
void getString(char *enteredstring);
void charSwap(char *zeroitharray,char array [], int swapnum);
//prototypes end

int main (void)
{
   char string[256];//max array length
   char *stringPtr = &string[0];//making pointer for the zeroith (first) number in the array
   int givennum = 0;
   int *givennumPtr = &givennum;// making pointer for whatever number the juser chooses
   getInt(givennumPtr);
   getString(string);
   
   printf("%s\n\n", string); //prints original string
   
   charSwap(stringPtr, string, givennum);
   printf("%s", string);//prints changed string
}

int getInt(int *given)// prompts user to put a number 0 to 9 included then 
{
    int enterednum;
    while(1)
    {
        printf("please enter int 0 - 9: ");
        scanf("%d", &enterednum);
        if(enterednum <= 9 && enterednum >=0)
        {
            *given = enterednum;
            break;//exits while loop only when instructions are followed
        }
    }
    return 0;
}
void getString(char *enteredstring)//prompts user to type string and stores it
{
    printf("enter a character string 0 to 255 characters long:");
    getchar();
    scanf("%s", enteredstring);
}
//swaps first number of the array with whatever number the user entered
void charSwap(char *zeroitharray,char array [], int swapnum)
{
    char charhold;

    charhold = array[swapnum];
    array[swapnum] = *zeroitharray;
    *zeroitharray = charhold;

}
