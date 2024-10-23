#include <stdio.h>
float convertTemp(float celcius);

int main()
{
    float farh = convertTemp(37);
    printf("far : %f", farh);
    return 0;
}

float convertTemp(float celcius)
{
    float farh = celcius * (9.0 / 5.0) + 32;
    return farh;
}