#include <stdio.h>
#define op 0.18
int main()
{

    // float price[3];

    // printf("price of item 1 : ");
    // scanf("%f", &price[0]);

    // printf("price of item 1 : ");
    // scanf("%f", &price[1]);

    // printf("price of item 1 : ");
    // scanf("%f", &price[2]);

    // printf("item 1 = %f  item 2 = %f item 3 = %f", (price[0] + (op * price[0])), (price[1] + (op * price[1])), (price[2] + (op * price[2])));

    float price[3];                               //we use only one variable to done work
    printf("enter 3 prices : ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("total price 1 : %f\n", price[0] + (0.18 * price[0]));
    printf("total price 2 : %f\n", price[1] + (0.18 * price[1]));
    printf("total price 3 : %f\n", price[2] + (0.18 * price[2]));
    return 0;
}