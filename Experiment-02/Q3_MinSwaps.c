// Name       : Arunvignesh R S
// Roll No    : 25BAD012
// Experiment : Grouping Active Sectors (Fixed-Size Sliding Window)

#include <stdio.h>

int main()
{
    int n;

    printf("Name     : Arunvignesh R S\n");
    printf("Roll No  : 25BAD012\n\n");

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the binary array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int count = 0;

    // Count total number of 1's
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
            count++;
    }

    if(count <= 1)
    {
        printf("\nOutput:\n");
        printf("Min Swaps: 0\n");
        printf("Final Array: ");

        for(int i = 0; i < n; i++)
            printf("%d ", arr[i]);

        return 0;
    }

    int ones = 0;

    for(int i = 0; i < count; i++)
    {
        if(arr[i] == 1)
            ones++;
    }

    int maxOnes = ones;
    int start = 0;

    for(int i = count; i < n; i++)
    {
        if(arr[i] == 1)
            ones++;

        if(arr[i-count] == 1)
            ones--;

        if(ones > maxOnes)
        {
            maxOnes = ones;
            start = i - count + 1;
        }
    }

    int minSwaps = count - maxOnes;

    int result[n];

    for(int i = 0; i < n; i++)
        result[i] = 0;

    for(int i = start; i < start + count; i++)
        result[i] = 1;

    printf("\nOutput:\n");
    printf("Min Swaps: %d\n", minSwaps);

    printf("Final Array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", result[i]);

    printf("\n");

    return 0;
}
