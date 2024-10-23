#include <stdio.h>

int main()
{
    // 2*3
    int marks[2][3]; //_ _ _ |_  _  _
    marks[0][0] = 90;
    marks[0][1] = 95;
    marks[0][2] = 99;

    marks[1][0] = 80;
    marks[1][1] = 97;
    marks[1][2] = 100;

    printf("%d", marks[1][2]);
    return 0;
}