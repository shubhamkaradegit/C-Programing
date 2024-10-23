#include <stdio.h>
int main()
{
    // increment operator
    //++i (pre increment)
    // i++(post increment)
    int i = 1;
    printf("%d \n", i++); // use, than increase
    printf("%d \n", i);

    printf("%d \n", ++i); // increase, than use
    printf("%d \n", i);

    printf("%d \n", i--); // use, than decrease
    printf("%d \n", i);

    printf("%d \n", --i); // decrease, than use
    printf("%d \n", i);
    return 0;
}