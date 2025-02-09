// code to find sum of elements above principle diagonal in a n*n matrix

#include <stdio.h>

int main()
{
    int a[10][10];
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            if (j > i)
                sum += a[i][j];
        }
    }
}