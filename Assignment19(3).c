#include<stdio.h>

void pattern(int iRow, int iCol)
{
    for (int i = 1; i <= iRow; i++) 
    {
        char currentChar = 'A' + i - 1; 
        for (int j = 1; j <= iCol; j++) 
        {
            printf("%c ", currentChar); 
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and column :");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}