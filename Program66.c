#include<stdio.h>   // For printf And scanf
#include<stdlib.h>  // For malloc And free

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iCount);    

    // 1 :- malloc(iCount * sizeof(int));
    // 2 :- ptr = malloc(iCount * sizeof(int));
    ptr = (int *)malloc(iCount * sizeof(int)); // How it Form Step 1 + 2

    printf("Enter The Elements : \n");

    //      1           2            3
    for(iCnt = 0 ; iCnt < iCount ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]); //  4
    }

    printf("Your Entered Elements Are : \n");
    //      1           2           3
    for(iCnt = 0 ; iCnt < iCount ; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);  //   4
    }
    printf("\n");

    return 0;
}