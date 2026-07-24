/*
-----------------------------------------
Name        : Arunvignesh R S
Department  : Artificial Intelligence and Data Science
Experiment  : Implementation of Binary Search Using Array in ADT
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
    int i, key, low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &l.size);

    printf("Enter sorted elements: ");
    for(i = 0; i < l.size; i++)
        scanf("%d", &l.arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = l.size - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(l.arr[mid] == key)
        {
            printf("Element found at position %d", mid);
            found = 1;
            break;
        }
        else if(l.arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(!found)
        printf("Element not found");

    return 0;
}
