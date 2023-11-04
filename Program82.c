// Accept N numbers from users And Display Minimum And Smallest Number

#include<stdio.h>   // Input Output
#include<stdlib.h>  //  For Malloc Or Free

void MaxMin(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];

    //       1          2           3
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {   
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin) // 4
        {
            iMin = Arr[iCnt];
        }
    }

    printf("Maximum Element IS : %d \n",iMax);
    printf("Minimum Element Is : %d \n",iMin);
}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;

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

     MaxMin(ptr, iCount);
    

    free (ptr);
    printf("Dynamic Memory Gets Deallocated Successfully...\n");
    return 0;
}
