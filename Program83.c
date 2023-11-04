// Calculate Frequency Of a Specific Value 
// Incomplete Code


#include<stdio.h>   // Input Output
#include<stdlib.h>  //  For Malloc Or Free

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iFrequency = 0;

    //       1          2           3
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt]==21)
        {
            iFrequency++;
        }
        return iFrequency;
    }
}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter number of elements that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int*)malloc(iCount * sizeof(int));
    printf("Dynamic Memory Allocated Succesfully \n");

    printf("Enter The Elements : \n");
    for(iCnt = 0; iCnt < iCount ; iCnt++)
    {
        printf("\n Enter The Element No %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr, iCount);
    printf("21 Occurs %d Times : \n",iRet);

    free (ptr);
    printf("Dynamic Memory Gets Deallocated Successfully...\n");
    return 0;
}
