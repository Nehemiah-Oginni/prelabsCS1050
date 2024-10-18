#include <stdio.h>

//prototypes
void modifyCharacter(char *ch);
void printDiamond(int size, char *startChar);

int main (void)
{
    char firstchar;
    int size;
    printf("enter size of diamond: "); //user chooses size
    scanf("%d", &size);
    getchar();
    printf("enter starting character: ");//user chooses the first character
    scanf("%c", &firstchar);
    char *firstcharPtr = &firstchar;//pointer for first character
    
    printDiamond(size, firstcharPtr);//passes selected size and pointer for first char
    
}

void modifyCharacter(char *ch)//changes character
{
    (*ch)++;
}
void printDiamond(int size, char *startChar)
{
    int gridsize = 2*size-1;
    int Dmid = size-1;
    char Diamond [gridsize][gridsize]; 
    
        for(int i=0; i<gridsize;i++)
        {
            if(i<size)
            {
                for(int j=0; j<gridsize;j++)
                {
                    if((j>=Dmid-i) && (j<=Dmid+i))
                    {
                        Diamond[i][j] = *startChar;
                        printf("%c",Diamond[i][j]);
                    }
                    else
                    {
                    printf(" ");
                    }
                }
            }
            else
            {
                *startChar-=1;
                for(int j=0; j<gridsize; j++)
                {
                    if((j>=i-Dmid) && (j<=Dmid*3-i))
                    {
                        Diamond[i][j] = *startChar;
                        printf("%c",Diamond[i][j]);
                    }
                    else
                    {
                    printf(" ");
                    }

                }
            }
            if(i<Dmid)
            {
            modifyCharacter(startChar);
            }
            printf("\n");
        }
}
