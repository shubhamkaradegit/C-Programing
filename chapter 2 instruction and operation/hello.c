#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    int sum = a + b;
    int multiply = a * b;

    // to define power any number
    int power = pow(5, 2);
    printf("%d \n", power);

    // modular oprater
    printf("%d \n", 16 % 2);
    printf("%d \n", -8 % 3);

    // type conversion
    printf("%d \n", 2 * 2);
    printf("%f \n", 2.0 * 7);
    printf("%f \n", 4.0 * 5);
    printf("%d \n", 2 / 3);
    printf("%f \n", 2 / 3);

    int n = (int)1.9999999;
    printf("%d \n", n);

    // operator precedence
    /*  *,/,%
         +,-
         =

        Associativity (for same precedence)
        left to right
     */

    int m = 4 * 3 / 6 * 2;
    printf("%d \n", m);

    // relational operator

    printf("%d \n", 4 == 4);
    printf("%d \n", 4 > 3);
    printf("%d \n", 2 <= 3);
    printf("%d \n", 4 != 3);

    //logical oprater
    printf("%d \n", 5<3 && 3>4);
    printf("%d \n", 4 != 3 || 7>6);
    printf("%d \n", !(4>3));

/*assignment operator
 =
 +=
 -=
 *=
 /=
 %=

*/
    return 0;
}