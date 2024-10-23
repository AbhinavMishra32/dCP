#include <stdio.h>

int main()
{
    int a[40];
    int b[40];
    int count = 0;

    int n, m;
    printf("Enter value of n & m: ");
    scanf("%d %d", &n, &m);

    int start = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = start; j < m; j++)
        {
            if (a[i] == b[j])
            {
                count++;
                start = j;
            }
        }
    }
}

23 54 78 98 102 12 45 43 78 95 98