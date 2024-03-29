#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iFrequency = 0;

    for( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter the number of elements: \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements: \n", iSize);

    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the element no %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = CountEven(p, iSize);
    printf("Result is %d\n", iRet);

    free(p);

    return 0;
}
