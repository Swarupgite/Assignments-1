#include<stdio.h>

int Multiply(int iValue1,int iValue2,int iValue3)
{
    int iAns = 0;
    iAns = iValue1*iValue2*iValue3;
    return iAns;

}

int main()
{
   int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
   printf("Please enter three numbers");
   scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

   iRet = Multiply(iValue1,iValue2,iValue3);
   printf("%d",iRet);
   return 0;
}