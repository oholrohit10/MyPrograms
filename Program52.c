// Prime Numbers
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    if(iNo < 0)
    {
        iNo = -iNo; // Updator
    }
    //       1          2       3
    for(iCnt = 2; iCnt <= (iNo / 2) ; iCnt++)
    {
        if((iNo % iCnt) == 0) // 4
        {
            bFlag = false;
            break;
        }          
    }
     return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter The Number :- \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d Is a Prime Number\n",iValue);
    }
    else
    {
        printf("%d Is not a prime Number\n",iValue);
    }

    return 0;
}