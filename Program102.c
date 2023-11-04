/*
    iRow = 3
    iCol = 4
    *   *   *   *
    #   #   #   #
    *   *   *   *
    #   #   #   #
*/

#include<stdio.h>

void Display(int iRow,  int iCol)
{
    int i = 0, j =0;
    for(i = 1; i<=iRow; i++) // Outer
    {
        for(j = 1; j<= iCol; j++) // Inner    
        {
            if(i%2 == 0)
            {
                printf("# \t");
            }
            else 
            {
                printf("*\t");
            }
        }
        printf("\n\n");
    }
}   


int main()
{
    int iNo1, iNo2 = 0;

    printf("Enter The Number Of Rows :\n");
    scanf("%d",&iNo1);

    printf("Enter The Number Of Coloumn :\n");
    scanf("%d",&iNo2);

    Display(iNo1,iNo2);
    return 0;
}