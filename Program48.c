// Get Number from user and find factor and Return Addition of these factor
#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;    
    
    //       1          2             3
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)   // 4
        
        {
           // printf("%d\n",iCnt);
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}




int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Sum Of Factors are :- %d\n",iRet);

    return 0;
}