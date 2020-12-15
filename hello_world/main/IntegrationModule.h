#include <stdio.h>

int integration(int a)
{
    return a*9;
}

int Unit(int a, int b)
{
    return a - integration(b) - 1;
}