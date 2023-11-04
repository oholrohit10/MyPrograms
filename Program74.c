// Accept N Number from user And Count Odd Numbers.
#include<stdio.h>
#include<stdlib.h>

int OddCount(int Arr[], int iSize) // (100, 4)
{
    int iCnt = 0;
    int iOddCnt = 0;
   
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iOddCnt++;
        }         
    }
    return iOddCnt;
}
int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the number of elemets that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int * )malloc(iCount * sizeof(int));

    printf("Dynamic Memory Gets Allocated Successfully for %d Elements\n",iCount);
    printf("Enter the %d Values : \n", iCount);

    for(iCnt = 0; iCnt < iCount ; iCnt++)
    {
        printf("\n Enter The Element no %d : ", iCnt+1);
        scanf("%d",&ptr[iCnt]); 
    }
    printf("\n");

    iRet = OddCount(ptr, iCount); 

    printf("Total Odd Numbers Are %d : \n",iRet);

    free(ptr); 
    printf("Dynamic Memory Gets De-Allocated Successfully.....\n");

    return 0;
}