// Name       : Arunvignesh R S
// Roll No    : 25BAD012
// Experiment : Squaring a Sorted Array (Two-Pointer Technique)

#include <stdio.h>

int main()
{
    int n;

    printf("Name     : Arunvignesh R S\n");
    printf("Roll No  : 25BAD012\n\n");

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], ans[n];

    printf("Enter the sorted array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = n - 1;
    int pos = n - 1;

    while(left <= right)
    {
        if(arr[left] * arr[left] > arr[right] * arr[right])
        {
            ans[pos] = arr[left] * arr[left];
            left++;
        }
        else
        {
            ans[pos] = arr[right] * arr[right];
            right--;
        }
        pos--;
    }

    printf("\nOutput:\n");
    printf("Sorted Squared Array: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }

    printf("\n");

    return 0;
}
