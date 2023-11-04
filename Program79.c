// Get N number from user add them And find Avg of that number
#include<stdio.h>   // Input Output
#include<stdlib.h>  //  For Malloc Or Free

float Average(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;
    float fAverage = 0.0f;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum +Arr[iCnt];
    }
    fAverage = ((float)iSum/(float)iSize); 
    
    return fAverage;
}



int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    float fRet = 0;

    printf("Enter number of elements that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int*)malloc(iCount * sizeof(int));
    printf("Dynamic Memory Allocated Succesfully \n");

    printf("Enter The Elements : \n");
    for(iCnt = 0; iCnt < iCount ; iCnt++)
    {
        printf("\n Enter The Element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr, iCount);
    printf("Avrage is : %f \n",fRet);

    free (ptr);
    printf("Dynamic Memory Gets Deallocated Successfully...\n");
    return 0;
}
