// Entyer The Number Of elements You want to Enter And Add Odd Numbers Them
#include<stdio.h>
#include<stdlib.h>

int OddAddition(int Arr[], int iSize) // (100, 4)
{
    int iCnt = 0;
    int iSum = 0;
    //      1           2           3
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
            if((Arr[iCnt] % 2) != 0)
        {
            iSum = iSum + Arr[iCnt] ; // 4
        }
    }
    return iSum;
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

    //      1           2           3
    for(iCnt = 0; iCnt < iCount ; iCnt++)
    {
        printf("\n Enter The Element no %d : ", iCnt+1);
        scanf("%d",&ptr[iCnt]); // 4
    }
    printf("\n");

    iRet = OddAddition(ptr, iCount); // Displat (100, 4)
    printf("Addition Of All Even Elements Are %d : \n",iRet);

    free(ptr); // free(100)
    printf("Dynamic Memory Gets De-Allocated Successfully.....\n");

    return 0;
}