#include <stdio.h>
int sum(int n);

int main()
{
    printf("sum is : %d", sum(5));
     return 0;
}

int sum(int n)
{
    if(n==1){         //n=1 is base value return 1 
        return 1;   //if statement is important
    }
    int sumNm1 = sum(n - 1); // sum of n-1 terms
    int sumN = sumNm1 + n;
    return sumN;
}
