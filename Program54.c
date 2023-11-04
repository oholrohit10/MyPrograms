#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

    printf("Value Of iNo is : %d\n",iNo);   // 721

    printf("*------------*-----------------*--------------*\n");
    iDigit = iNo % 10;
    printf("Digit Is : %d\n",iDigit);       // 1
    iNo = iNo / 10;         
    printf("Value Of iNo is : %d\n",iNo);   // 72

    printf("*------------*-----------------*--------------*\n");
    iDigit = iNo % 10;
    printf("Digit Is : %d\n",iDigit);       // 2
    iNo = iNo / 10;         
    printf("Value Of iNo is : %d\n",iNo);   // 7
    
    printf("*------------*-----------------*--------------*\n");
    iDigit = iNo % 10;
    printf("Digit Is : %d\n",iDigit);       // 7
    iNo = iNo / 10;         
    printf("Value Of iNo is : %d\n",iNo);   // 0
}

int main()
{
    int iValue = 721;

    //printf("Enter The Number : ");
    //scanf("%d",&iValue);

    Display(iValue);

    return 0;
}