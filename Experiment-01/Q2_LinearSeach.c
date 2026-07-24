/*
-----------------------------------------
Name        : Arunvignesh R S
Department  : Artificial Intelligence and Data Science
Experiment  : Implementation of Linear Search Using Array in ADT
Language    : C
-----------------------------------------
*/
#include <stdio.h>
#define MAX 100

struct List
{
    int arr[MAX];
    int size;
};

int main()
{
    struct List l;
    int i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &l.size);

    printf("Enter elements: ");
    for(i = 0; i < l.size; i++)
        scanf("%d", &l.arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < l.size; i++)
    {
        if(l.arr[i] == key)
        {
            printf("Element found at position %d", i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element not found");

    return 0;
}
