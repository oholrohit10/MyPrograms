#include<stdio.h>   // For printf And scanf
#include<stdlib.h>  // For malloc And free

void Display(int *Arr, int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iCount);    

    ptr = (int *)malloc(iCount * sizeof(int)); 

    printf("Enter The Elements : \n");
    //      1           2            3
    for(iCnt = 0 ; iCnt < iCount ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]); //  4
    }

    Display (ptr, iCount);

    return 0;
}