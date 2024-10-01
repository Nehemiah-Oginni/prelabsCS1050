#include <stdio.h>

void Print2DArray(int array[12][3], int rows) //prints the array and sets both array and rows ans an int
{
    rows = 11;
    for(int i=0;i<=rows;i++)
    {
        printf("row %d: ",i);//makes sure "row" is only printed once per row
        for(int j=0;j<=2;j++)// columns
        {
            printf("%d ", array[i][j]);// prints down each line
        }
        printf("\n");//indents each time
    }
    printf("\n");
}
int PrintRowAverage(int array[12][3], int whichrow)//prints averages of all the rows
{
    double rowaverage = 0;//shows row average
    double rowsum = 0;//sets row sum
    whichrow = 11;// switched with number to lessen chances of confusion
    int j = 0;
    for(int i=0;i<=whichrow;i++)
    {
        rowsum = 0;// resets rowsum each time the loop restarts
        for(j=0;j<=2;j++)
        {
        rowsum += array[i][j];
        }
        rowaverage = rowsum / j;// takes average after the whole row has been added into "rowaverage"
        printf("Average of row %d = %f\n",i , rowaverage);//prints each row
    }
    printf("\n");
    return rowaverage;
}
int PrintColAverage(int array[12][3], int whichcol)//prints each col average
{
    whichcol = 2;//switched with #2 to ensure confusion is minimal
    double colaverage = 0;
    double colsum = 0;
    int i = 0;
    for(int j=0;j<=whichcol;j++)//columns on outside to ensure the it counts down instead of out
    {
        colsum = 0;
        for(i=0;i<=11;i++)
        {
            colsum += array[i][j];
        }
        colaverage = colsum / i;
        printf("Average of col %d = %f\n",j , colaverage);
    }
    printf("\n");
    return colaverage;
}
int main(void)// make sure to call all the functions
{
    int array [12][3]=
    {
        {72, 68, 62},
        {95, 88, 95},
        {93, 97, 86},
        {98, 77, 98},
        {99, 92, 90},
        {47, 32, 27},
        {97, 99, 85},
        {85, 95, 91},
        {96, 91, 99},
        {94, 90, 85},
        {98, 98, 90},
        {76, 82, 98}
    };
    int rows = array[12][3];
    int col = array[12][3];
// calling all functions >:D
    Print2DArray(array, rows);
    PrintRowAverage(array, rows);
    PrintColAverage(array, col);
    
    return 0;// ensures the preogram ends when it is supposed to 
}
