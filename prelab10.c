/*****************************************************************************
 * prelab10.c
 * Starter code by Jim Ries (jer676)
 * Fall 2024
 *****************************************************************************/
#include <stdio.h>
#include <string.h>

void PrintStrings(char * * strings, int count)
{
    for(int i=0; i<count; i++)
    {
        printf("%s\n", *(strings + i));
    }
}

void SwapStrings (char * * strings, int indexFrom, int indexTo)
{
    char* hold;

    hold = *(strings + indexFrom);
    *(strings + indexFrom) = *(strings + indexTo);
    *(strings + indexTo) = hold;

}

int main(void)
{
    // First Test
    char * baseballTeams[] = 
    {
        "Chicago Cubs",
        "St. Louis Cardinals",
        "Kansas City Royals",
        "New York Yankees",
    };
    int countTeams = sizeof(baseballTeams)/sizeof(baseballTeams[0]);

    printf("Original list of teams:\n");
    PrintStrings(baseballTeams, countTeams);
    printf("\n");

    SwapStrings(baseballTeams, 0, 1);
    SwapStrings(baseballTeams, 1, 2);

    printf("Reordered (improved) list of teams\n");
    PrintStrings(baseballTeams, countTeams);
    printf("\n");


    // Second Test
    char * eecsProfessors[] =
    {
        "Kamrul Islam",
        "Justin Legarsky",
        "Yi Shang",
        "Derek Anderson",
        "Prasad Calyam",
        "Rohit Chadha",
        "Jianlin Cheng",
        "Curt Davis",
        "Gui DeSouza",
        "Sean Goggins",
        "Mike Jurczyk",
        "Jim Ries",
        "Ekin Ufuktepe",
    };
    int countProfessors = sizeof(eecsProfessors)/sizeof(eecsProfessors[0]);

    printf("Original list of professors:\n");
    PrintStrings(eecsProfessors, countProfessors);
    printf("\n");

    SwapStrings(eecsProfessors, 11, 0);
    SwapStrings(eecsProfessors, 0, 12);
    SwapStrings(eecsProfessors, 12, 11);


    printf("Reordered list of professors:\n");
    PrintStrings(eecsProfessors, countProfessors);
    printf("\n");
}
