// Name       : Arunvignesh R S
// Roll No    : 25BAD012
// Experiment : Sliding Window Maximum Peak (Monotonic Queue)

#include <stdio.h>

int main()
{
    int n, k;

    printf("Name     : Arunvignesh R S\n");
    printf("Roll No  : 25BAD012\n\n");

    printf("Enter the number of elements and window size: ");
    scanf("%d %d", &n, &k);

    int arr[n];

    printf("Enter the array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int deque[n];
    int front = 0;
    int rear = -1;

    printf("\nOutput:\n");
    printf("Sliding Window Maximums: ");

    for(int i = 0; i < n; i++)
    {
        // Remove indices outside the current window
        while(front <= rear && deque[front] <= i - k)
        {
            front++;
        }

        // Remove smaller elements from the back
        while(front <= rear && arr[deque[rear]] <= arr[i])
        {
            rear--;
        }

        // Insert current index
        deque[++rear] = i;

        // Print maximum of current window
        if(i >= k - 1)
        {
            printf("%d ", arr[deque[front]]);
        }
    }

    printf("\n");

    return 0;
}
