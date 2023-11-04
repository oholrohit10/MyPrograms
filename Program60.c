#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iDigit + iSum;
        iNo = iNo / 10;
   }
    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);
    printf("Sum Of Digits is : %d\n",iRet);
    return 0;
}