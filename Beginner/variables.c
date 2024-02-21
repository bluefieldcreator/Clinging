#include <stdio.h>

int sumInts(int a, int b)
{
    return a + b;
}

float sumFloats(float a, float b)
{
    return a + b;
}

int main()
{
    int a = 5;
    int b = 10;
    float c = 5.5;
    float d = 10.5;
    printf("Sum of %d and %d is %d\n", a, b, sumInts(a, b));
    printf("Sum of %f and %f is %f\n", c, d, sumFloats(c, d));
    return 0;
}
