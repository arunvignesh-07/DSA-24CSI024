// Name       : Arunvignesh R S
// Roll No    : 25BAD012
// Experiment : Maximum Task Window Within Budget (Variable-Size Sliding Window)

#include <stdio.h>

int main()
{
    int n, p;

    printf("Name     : Arunvignesh R S\n");
    printf("Roll No  : 25BAD012\n\n");

    printf("Enter the number of tasks and power limit: ");
    scanf("%d %d", &n, &p);

    int arr[n];

    printf("Enter the energy cost of each task:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int start = 0;
    int sum = 0;
    int maxLength = 0;

    for(int end = 0; end < n; end++)
    {
        sum += arr[end];

        while(sum > p)
        {
            sum -= arr[start];
            start++;
        }

        if(end - start + 1 > maxLength)
        {
            maxLength = end - start + 1;
        }
    }

    printf("\nOutput:\n");
    printf("Maximum Length: %d\n", maxLength);

    return 0;
}
