#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int MIN = INT_MAX;
    int MAX = INT_MIN;
    int minPosition;
    int maxPosition;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < MIN)
        {
            MIN = arr[i];
            minPosition = i;
        }
        if (arr[i] > MAX)
        {
            MAX = arr[i];
            maxPosition = i;
        }
        // printf("%d ", arr[i]);
    }
    arr[minPosition] = MAX;
    arr[maxPosition] = MIN;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // printf("%d %d\n", MIN, minPosition);
    // printf("%d %d\n", MAX, maxPosition);

    return 0;
}