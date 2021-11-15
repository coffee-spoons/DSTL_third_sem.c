/******************************************************
 * Program - Union of two sets
 * Writer - Abhishek Kayal
 * Learning - Implementing union of two sets in program
 * ***************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag = 0,n1,n2;

    //From here inputting has started for the set1 and set2
    printf("\nEnter the number of elements of set 1: ");
    scanf("%d",&n1);

    //dynamically allocated memory for set1
    int * set1= (int * ) malloc ( n1 * sizeof(int )); 

    printf("Enter the element of set 1: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &set1[i]);
    }

    printf("\nEnter the number of elements of set 2: ");
    scanf("%d",&n2);

    //dynamically allocated memory for set2
    int * set2= (int * ) malloc ( n2 * sizeof(int ));

    printf("Enter the element of set 2: ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &set2[i]);
    }

    //dynamically allocated memory for set3
    int * set3= (int * ) malloc ( (n1 + n2) * sizeof(int ));

    //inserting all elements of set1 in set3 first
    for (int i = 0; i < n1; i++)
    {
        set3[i] = set1[i];
    }

    /*elements which are not contained in set1 will be
    stored in set3 otherwise it will not be stored in
    set3*/
    int z = 5;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (set2[i] == set1[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            flag = 0;
            continue;
        }
        else if (flag == 0)
        {
            set3[z++] = set2[i];
        }
    }

    /* This will print set3 which contain union of two
    sets 1 and 2*/
    for (int i = 0; i < z; i++)
    {
        printf("%d, ", set3[i]);
    }

    return 0;
}