#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter number : ");
        scanf("%d", &n);
        
        if (n % 7 == 0)  //mulple of 7  
        {
            break;
        }
    } while(1);
        printf("thank you!!");
    return 0;
}