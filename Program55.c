#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

    // Joparynat iNo 0 Hot Nai Toparynt Fira
    while(iNo != 0)
    {
        printf("----------------------------\n");
        iDigit = iNo % 10;
        printf("Digit Is : %d\n",iDigit);

        iNo = iNo / 10;
        printf("Number Is : %d\n",iNo);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}