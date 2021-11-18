#include <stdio.h>

int main()
{
    int set1[5], set2[5], set3[5],z=5;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &set1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &set2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        set3[i] = set1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            if (set3[i] == set2[j])
            {
                for (int k = i; k < z; k++)
                {
                    set3[k] = set3[k + 1];
                    z--;
                }
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", set3[i]);
    }

    return 0;
}