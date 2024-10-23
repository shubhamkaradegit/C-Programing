#include <stdio.h>

void calcprice(float value);
int main()
{
    float value = 100.0;   //give value always in main function
    calcprice(value);
    printf("value is : %f \n",value);   //this value is of argument
    return 0;
}

void calcprice(float value)
{
    value = value + (0.18 * value);      
    printf("final price is : %f \n", value);   //this value is of parameter
}

//changes to parameters in function don't change the value in calling function 
//because a copy of argument is passed to the function