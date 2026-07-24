// Name       : Arunvignesh R S
// Roll No    : 25BAD012
// Experiment : Cumulative Resource Consumption (Prefix Sum Technique)

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Name     : Arunvignesh R S\n");
    printf("Roll No  : 25BAD012\n\n");

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOutput:\n");
    printf("Prefix Sum Array: ");

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        printf("%d ", sum);
    }

    printf("\n");

    return 0;
}
