// Find Number IS Pallindrome Or Not
// Error In Code

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iCopy = iNo; // Xerox Kadhali iNO Chi 
    int iRev = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10)+iDigit;
    }

    if(iRev == iCopy)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true )
    {
        printf("%d Is A Pallindrome Number\n",iValue);
    }
    else
    {
        printf("%d Is Not A Pallindrome Number\n",iValue);
    }
}