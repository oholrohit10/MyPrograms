// Get Number from user and find factor and Return Addition of these factor
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;    
    
    if(iNo < 0) // Updator
    {
        iNo = -iNo;
    }
    //       1          2             3
    for(iCnt = ; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)   // 4
        
        {
            iSum = iSum + iCnt;
        }
    
    } 

    {
       if(iSum == iNo)
        {
            return true;
        }
       else
        {
            return false;
        }
    }
}


int main()
{   
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    
    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is a Perfect Number\n",iValue);
    }
    else
    {
        printf("%d is Not a Perfect Number\n",iValue);
    }

    return 0;
}