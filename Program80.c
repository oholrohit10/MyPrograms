// Accept N numbers from users and find largest element 

#include<stdio.h>   // Input Output
#include<stdlib.h>  //  For Malloc Or Free

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    //       1          2           3
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] > iMax) // 4
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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
        printf("\n Enter The Element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Maximum(ptr, iCount);
    printf("maximum Element is : %d \n",iRet);

    free (ptr);
    printf("Dynamic Memory Gets Deallocated Successfully...\n");
    return 0;
}
