// Input :- 4
// Output :-  1     #     2    #     3       #      4      #

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //       1          2       3
    for(iCnt = 1 ; iCnt <= iNo; iCnt++ )
    {
        printf("%d\t #\t",iCnt);  // 4
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