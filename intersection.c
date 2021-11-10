/*******************************************************************
 * Program - This Program is for finding the intersection of two sets
 * Writer - Abhishek Kayal (Drako)
 * Learning - implementing intersection of two sets using dynamically allocated memory ( heap memory ).
 * *****************************************************************/

#include <stdio.h>
#include <stdlib.h>
// #define m 50

// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main()
{
    int n1, n2;
    int z = 0;

    //From here inputting has started for the set1 and set2
    printf("\nEnter the number of elements of set1: ");
    scanf("%d", &n1);
    int * set1= (int * ) malloc (n1*sizeof(int));
    
    printf("Enter the element of set 1: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &set1[i]);
    }

    printf("\nEnter the number of elements of set2: ");
    scanf("%d", &n2);
    int * set2= (int * ) malloc (n1*sizeof(int));
    
    printf("Enter the element of set 2: ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &set2[i]);
    }

    int big= n1>n2?n1:n2;
    int * set3= (int * ) malloc (big*sizeof(int));

    //Intersecting elements and storing onto another set3 which is dynamically allocated

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (set1[i] == set2[j])
            {
                set3[z++] = set1[i];
            }
        }
    }

    //The below program piece is for printing the intersection result of the whole program

    printf("The intersection is: {");
    for (int i = 0; i < z; i++)
    {
        printf("%d, ", set3[i]);
    }
    printf("}");

    return 0;
}