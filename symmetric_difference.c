/************************************************
 * Program - This program is use to apply symmetric difference between two sets
 * ********************************************/
#include <stdio.h>

int main()
{
    int seta[10], setb[10], setc[10], i, j, e = 0, flag = 0, k = 0;
    for (int i = 0; i <= 3; i++)
    {
        printf("\nEnter value for a[%d]: ", i);
        scanf("%d", &seta[i]);
    }

    for (int i = 0; i <= 3; i++)
    {
        printf("\nEnter value for b[%d]: ", i);
        scanf("%d", &setb[i]);
    }

    for (int i = 0; i <= 3; i++)
    {
        flag = 0;
        for (int j = 0; j <= 3; j++)
        {
            if (seta[i] == setb[j])
            {
                flag = 1;
            }
        }
        if (flag != 1)
        {
            setc[k++] = seta[i];
        }
    }

    for (int i = 0; i <= 3; i++)
    {
        flag = 0;
        for (int j = 0; j <= 3; j++)
        {
            if (seta[j] == setb[i])
            {
                flag = 1;
            }
        }
        if (flag != 1)
        {
            setc[k++] = setb[i];
            e++;
        }
    }
    for (int i = 0; i <= e + 1; i++)
    {
        printf("\nSymmetric Difference: %d", setc[i]);
    }

    return 0;
}