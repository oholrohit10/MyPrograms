// Input :- 4
// Output :- A      B       C       D

#include<stdio.h>
//#include<>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    //       1          2       3
    for(iCnt = 1, ch = 'A' ; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);  // 4
        
    }
    printf("\n");
}

int main()
{  
    int iValue = 0;

    printf("Enter The Count : ");
    scanf("%d",&iValue); 
    
    Display(iValue);

    return 0;
}