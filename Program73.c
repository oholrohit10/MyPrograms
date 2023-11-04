// Accept N Number from user and display only Odd numbers.

#include<stdio.h>
#include<stdlib.h>

// void Display (int *Arr, int iSize)
void OddDisplay(int Arr[], int iSize) // (100, 4)
{
    int iCnt = 0;
    printf("\n Odd Elements Of The Array Are : \n");
    //      1           2           3
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        printf("%d\t",Arr[iCnt]); // 4
    }
    printf("\n");
}
int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elemets that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int * )malloc(iCount * sizeof(int));

    printf("Dynamic Memory Gets Allocated Successfully for %d Elements\n",iCount);
    printf("Enter the %d Values : \n", iCount);

    //      1           2           3
    for(iCnt = 0; iCnt < iCount ; iCnt++)
    {
        printf("\n Enter The Element no %d : ", iCnt+1);
        scanf("%d",&ptr[iCnt]); // 4
    }

    OddDisplay (ptr, iCount); // Displat (100, 4)

    free(ptr); // free(100)
    printf("Dynamic Memory Gets De-Allocated Successfully.....\n");

    return 0;
}