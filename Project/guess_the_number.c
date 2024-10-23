#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mynum, usernum;
    // mynum = 3;
    srand(time(NULL));
    mynum = rand() % 10;
    printf("I Have A Number In Mind Between (0-9).Can you Guess It? \n\n");

    while (1)
    {
        printf("Enter your Guess : ");
        scanf("%d", &usernum);

        if (mynum == usernum)
        {
            printf("yes you Got it!");
            break;
        }
        else if (mynum > usernum)
        {
            printf("My number is Greater than %d. Try Again!!\n\n", usernum);
        }
        else
        {
            printf("My number is smaller than %d.Try Again\n\n", usernum);
        }
    }
    return 0;
}