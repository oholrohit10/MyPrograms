// Input :- 6
// Output :- 0  1   2   3   4   5   6

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //       1          2       3
    for(iCnt = 0; iCnt <= iNo; iCnt++ )
    {
        printf("%d\t",iCnt);  // 4
    }
    printf("\n");
}

int main()
{  
    int iValue = 0;

    printf("Enter The Count : ");
    scanf("%d",&iValue); 
    
    Display(iValue);

    return 0;
}